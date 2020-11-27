#include "pch.h"

#include <cpr/cpr.h>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "Stock.h"
#include <iostream>

using namespace std;

STOCKDLL Stock::Stock(const string& symbol) {
    // Set all the private attributes here. Make necessary API calls to do so.
    ticker = symbol; 
}


STOCKDLL void Stock::updateMarketVals () {
    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/quote" },
        cpr::Parameters{ {"symbol", ticker}, {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();

    const char* text = r.text.c_str();
    rapidjson::Document doc;
    doc.Parse(text);

    currentPrice = doc["c"].GetFloat();
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
}


STOCKDLL void Stock::updateCandles(const string& resolution) {
    // Resolution can be 1, 5, 15, 30, 60, D, W or M in string format
    // Have to do some research on UNIX timestamps for the 2 variables below

    const auto p1 = chrono::system_clock::now();
    const auto time_now = std::chrono::duration_cast<std::chrono::seconds>(
        p1.time_since_epoch()).count();
    auto time_from = time_now;

    if (resolution == "D") {
        time_from = time_now - 86400;
    }
    else if (resolution == "W") {
        time_from = time_now - 604800;
    }
    else if (resolution == "M") {
        time_from = time_now - 2.628e+6;
    }
    else {
        string from = "ERROR, resolution must be D, W or M";
        time_from = NULL;
    }

    string from = to_string(time_from);
    string to = to_string(time_now);

    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/stock/candle" },
        cpr::Parameters{ {"symbol", ticker}, {"resolution", resolution}, {"from", from}, {"to", to}, {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();
    const char* text = r.text.c_str();
    rapidjson::Document d;
    d.Parse(text);

    //for (auto& v : d["c"].GetArray())
    //    candles.push_back(v.GetFloat());
    //for (auto& v : d["t"].GetArray())
    //    candleTimes.push_back(v.GetInt());
}

STOCKDLL void Stock::updateNews() {
    string fromDate = "2020-09-19";
    string currentDate = "2020-10-19";
    cpr::AsyncResponse fr = cpr::GetAsync(cpr::Url{ "https://finnhub.io/api/v1/company-news" },
        cpr::Parameters{ {"symbol", ticker}, {"from", fromDate}, {"to", currentDate},  {"token", "bu4gihf48v6p8t6gh4bg"} });

    cpr::Response r = fr.get();
    const char* text = r.text.c_str();
    rapidjson::Document doc;
    doc.Parse(text);
    cout << doc.GetString() << endl;
    //cout << r.text << endl; // Look at what the data looks  like

    //for (int i = 0; i < 4; i++) {
    //    struct news {
    //        string headline = doc["headline"].GetString();
    //        string image = doc[i]["image"].GetString();
    //        string url = doc[i]["url"].GetString();
    //        string source = doc[i]["source"].GetString();
    //        string datetime = convertDateTime(doc[i]["datetime"].getString());
    //    }
    //    // companyNews IS GOING TO BE AN ARRAY OF news STRUCTS WITH A PREDEFINED SIZE OF 4. CAN CHANGE LENGTH LATER
    //    companyNews.append(news);
    //}
}


STOCKDLL float Stock::getCurrentPrice() {
    return currentPrice;
}

STOCKDLL float Stock::getOpenPrice() {
    return openPrice;
}

STOCKDLL float Stock::getPL() {
    return currentPrice - openPrice;
}

//STOCKDLL float Stock::getMarketCap() {
//    return marketCap;
//}
//
//STOCKDLL float Stock::getDailyHigh() {
//    return dailyHigh;
//}
//
//STOCKDLL float Stock::dailyLowHigh() {
//    return dailyLow;
//}

//STOCKDLL vector<string> Stock::getNews(vector <string> news) {}
STOCKDLL void Stock::generateGraph(int candles) {} //Creates a graph object

// CONVERT DATETIME FROM 155458347 to something readable
string convertDateTime(int& datetime) {
    return "";
}