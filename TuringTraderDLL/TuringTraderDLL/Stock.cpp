#include "pch.h"

#include <cpr/cpr.h>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "Stock.h"
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

STOCKDLL Stock::Stock(const string& symbol) {
    // Set all the private attributes here. Make necessary API calls to do so.
    ticker = symbol;
}


STOCKDLL void Stock::updateMarketVals() {
    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/quote" },
        cpr::Parameters{ {"symbol", ticker}, {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();

    const char* text = r.text.c_str();
    rapidjson::Document doc;
    doc.Parse(text);

    currentPrice = doc["c"].GetFloat();
    currentPrice = (int)(currentPrice * 100 + .5);
    currentPrice = (float)currentPrice / 100;
    openPrice = doc["o"].GetFloat();
    dailyHigh = doc["h"].GetFloat();
    dailyLow = doc["l"].GetFloat();
}

STOCKDLL void Stock::updateProfile() {
    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/stock/profile2" },
        cpr::Parameters{ {"symbol", ticker}, {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();
    const char* text = r.text.c_str();
    rapidjson::Document doc;
    doc.Parse(text);
    name = doc["name"].GetString();
    exchange = doc["exchange"].GetString();
    logo = doc["logo"].GetString();

    marketCap = doc["marketCapitalization"].GetFloat();
    marketCap = (int)(marketCap * 100 + .5);
    marketCap = (float)marketCap / 100;
}


STOCKDLL void Stock::updateCandles(const string& resolution) {
    // Resolution can be 1, 5, 15, 30, 60, D, W or M in string format
    // Have to do some research on UNIX timestamps for the 2 variables below

    // RESET Candles vector attribute
    candles.clear();

    const auto p1 = chrono::system_clock::now();
    const auto time_now = std::chrono::duration_cast<std::chrono::seconds>(
        p1.time_since_epoch()).count();
    auto time_from = time_now;

    string candle_w;

    if (resolution == "D") {
        time_from = time_now - 86400;
        candle_w = "5";
    }
    else if (resolution == "W") {
        time_from = time_now - 604800;
        candle_w = "30";
    }
    else if (resolution == "M") {
        time_from = time_now - 2.628e+6;
        candle_w = "60";
    }
    else {
        string from = "ERROR, resolution must be D, W or M";
        time_from = NULL;
    }

    string from = to_string(time_from);
    string to = to_string(time_now);

    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/stock/candle" },
        cpr::Parameters{ {"symbol", ticker}, {"resolution", candle_w}, {"from", from}, {"to", to}, {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();
    const char* text = r.text.c_str();
    rapidjson::Document d;
    d.Parse(text);

    for (auto& v : d["c"].GetArray())
        candles.push_back(v.GetFloat());
    for (auto& v : d["t"].GetArray())
        candleTimes.push_back(v.GetInt());
}

STOCKDLL void Stock::updateNews() {
    std::tm bt{};
    std::tm bt2{};
    time_t now = time(0);
    time_t yd = time(0) - 86400;

    localtime_s(&bt, &now);
    localtime_s(&bt2, &yd);

    // default = "YYYY-MM-DD HH:MM:SS"
    string fmt = "%F %T";
    char buf[64];
    buf, std::strftime(buf, sizeof(buf), fmt.c_str(), &bt);

    char buf2[64];
    buf2, std::strftime(buf2, sizeof(buf2), fmt.c_str(), &bt2);

    string today = string(&buf[0], &buf[10]);
    string yday = string(&buf2[0], &buf2[10]);

    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/company-news" },
        cpr::Parameters{ {"symbol", ticker}, {"from", yday}, {"to", today},  {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();
    const char* text = r.text.c_str();
    rapidjson::Document doc;
    doc.Parse(text);

    int iter = 0;
    news article{};
    string headline, image, source, url, date;

    assert(doc.IsArray()); // attributes is an array
    for (rapidjson::Value::ConstValueIterator itr = doc.Begin(); itr != doc.End(); ++itr) {
        if (iter == 5) break;
        const rapidjson::Value& newsItem = *itr;
        assert(newsItem.IsObject()); // each attribute is an object
        for (rapidjson::Value::ConstMemberIterator itr2 = newsItem.MemberBegin(); itr2 != newsItem.MemberEnd(); ++itr2) {
            string key = itr2->name.GetString();
            if (key == "headline")
                headline = itr2->value.GetString();
            if (key == "image")
                image = itr2->value.GetString();
            if (key == "source")
                source = itr2->value.GetString();
            if (key == "url")
                url = itr2->value.GetString();
            if (key == "datetime") {
                long int timestamp = itr2->value.GetInt();
                date = unixTimeToHumanReadable(timestamp);
            }

        }
        article = {
            headline,
            image,
            url,
            source,
            date
        };
        companyNews.push_back(article);
        iter++;
    }
}


STOCKDLL float Stock::getCurrentPrice() {
    float value = (int)(currentPrice * 100 + .5);
    return (float)value / 100;
}

STOCKDLL float Stock::getOpenPrice() {
    float value = (int)(openPrice * 100 + .5);
    return (float)value / 100;
}

STOCKDLL float Stock::getPL() {
    float value = currentPrice - openPrice;
    value = (int)(value * 100 + .5);
    return (float)value / 100;
}

STOCKDLL float Stock::getMarketCap() {
    float value = (int)(marketCap * 100 + .5);
    return (float)value / 100;
}

STOCKDLL float Stock::getDailyHigh() {
    float value = (int)(dailyHigh * 100 + .5);
    return (float)value / 100;
}

STOCKDLL float Stock::getDailyLow() {
    float value = (int)(dailyLow * 100 + .5);
    return (float)value / 100;
}

STOCKDLL vector<float> Stock::getCandles() {
    return candles;
}

STOCKDLL vector<int> Stock::getCandleTimes() {
    return candleTimes;
}

STOCKDLL vector<Stock::news> Stock::getNews() {
    return companyNews;
}

// CONVERT DATETIME FROM 155458347 to something readable
STOCKDLL string Stock::unixTimeToHumanReadable(long int seconds) {
    // Save the time in Human
    // readable format
    string ans = "";

    // Number of days in month
    // in normal year
    int daysOfMonth[] = { 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };

    long int currYear, daysTillNow, extraTime,
        extraDays, index, date, month, hours,
        minutes, secondss, flag = 0;

    // Calculate total days unix time T
    daysTillNow = seconds / (24 * 60 * 60);
    extraTime = seconds % (24 * 60 * 60);
    currYear = 1970;

    // Calculating currrent year
    while (daysTillNow >= 365) {
        if (currYear % 400 == 0
            || (currYear % 4 == 0
                && currYear % 100 != 0)) {
            daysTillNow -= 366;
        }
        else {
            daysTillNow -= 365;
        }
        currYear += 1;
    }

    // Updating extradays because it
    // will give days till previous day
    // and we have include current day
    extraDays = daysTillNow + 1;

    if (currYear % 400 == 0
        || (currYear % 4 == 0
            && currYear % 100 != 0))
        flag = 1;

    // Calculating MONTH and DATE
    month = 0, index = 0;
    if (flag == 1) {
        while (true) {

            if (index == 1) {
                if (extraDays - 29 < 0)
                    break;
                month += 1;
                extraDays -= 29;
            }
            else {
                if (extraDays
                    - daysOfMonth[index]
                    < 0) {
                    break;
                }
                month += 1;
                extraDays -= daysOfMonth[index];
            }
            index += 1;
        }
    }
    else {
        while (true) {

            if (extraDays
                - daysOfMonth[index]
                < 0) {
                break;
            }
            month += 1;
            extraDays -= daysOfMonth[index];
            index += 1;
        }
    }

    // Current Month
    if (extraDays > 0) {
        month += 1;
        date = extraDays;
    }
    else {
        if (month == 2 && flag == 1)
            date = 29;
        else {
            date = daysOfMonth[month - 1];
        }
    }

    //// Calculating HH:MM:YYYY
    hours = extraTime / 3600;
    minutes = (extraTime % 3600) / 60;
    secondss = (extraTime % 3600) % 60;

    ans += to_string(date);
    ans += "/";
    ans += to_string(month);
    ans += "/";
    ans += to_string(currYear);
    ans += " ";
    ans += to_string(hours);
    ans += ":";
    ans += to_string(minutes);
    ans += ":";
    ans += to_string(secondss);

    // Return the time
    return ans;
}