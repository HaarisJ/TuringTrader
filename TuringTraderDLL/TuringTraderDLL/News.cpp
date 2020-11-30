#include "pch.h"

#include <cpr/cpr.h>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "News.h"
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

NEWSDLL News::News(){
    vector<news> newsVector; 
}

NEWSDLL void News::updateNews() {
    std::tm bt{};
    std::tm bt2{};
    time_t now = time(0);
    time_t yd = time(0) - 86400;

    localtime_s(&bt, &now);
    localtime_s(&bt2, &yd);

    // default = "YYYY-MM-DD HH:MM:SS"
    std::string fmt = "%F %T";
    char buf[64];
    buf, std::strftime(buf, sizeof(buf), fmt.c_str(), &bt);

    char buf2[64];
    buf2, std::strftime(buf2, sizeof(buf2), fmt.c_str(), &bt2);

    std::string today = std::string(&buf[0], &buf[10]);
    std::string yday = std::string(&buf2[0], &buf2[10]);

    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/news" },
        cpr::Parameters{ {"categories", "general"},  {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();
    const char* text = r.text.c_str();
    rapidjson::Document doc;
    doc.Parse(text);

    int iter = 0;
    news article{};
    std::string headline, image, source, url, date;

    assert(doc.IsArray()); // attributes is an array
    for (rapidjson::Value::ConstValueIterator itr = doc.Begin(); itr != doc.End(); ++itr) {
        if (iter == 5) break;
        const rapidjson::Value& newsItem = *itr;
        assert(newsItem.IsObject()); // each attribute is an object
        for (rapidjson::Value::ConstMemberIterator itr2 = newsItem.MemberBegin(); itr2 != newsItem.MemberEnd(); ++itr2) {
            std::string key = itr2->name.GetString();
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
        newsVector.push_back(article);
        iter++;
    }
}

NEWSDLL vector<News::news> News::getNews() {
    return newsVector;
}

// CONVERT DATETIME FROM 155458347 to something readable
NEWSDLL string News::unixTimeToHumanReadable(long int seconds) {
    // Save the time in Human
    // readable format
    std::string ans = "";

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