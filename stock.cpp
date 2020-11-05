// Implementation file for stock.h

#include <iostream>
#include <string>
#include <cpr/cpr.h>
#include "rapidjson/document.h"
#include "stock.h"

using namespace std;
using namespace rapidjson;

Stock::Stock(const string& symbol) {
    // Set all the private attributes here. Make necessary API calls to do so.
}

// The api member functions will make specific calls using this api() member function 
Document Stock::api(const string& endpoint) {
    cpr::Response r = cpr::Get(cpr::Url{endpoint},
                      cpr::Parameters{{"symbol", symbol}, {"token", "bu4gihf48v6p8t6gh4bg"}});
    
    const char* text = r.text.c_str();
    Document d;
    d.Parse(text);
    return d;
}

void Stock::updateQuote() {
    Document doc = Stock::api("https://finnhub.io/api/v1/quote");
    currentPrice = doc["c"].getFloat();
    openPrice = doc["o"].getFloat();
    dailyHigh = doc["h"].getFloat();
    dailyLow = doc["l"].getFloat();
}

void Stock::updateProfile() {
    Document doc = Stock::api("https://finnhub.io/api/v1/stock/profile2");
    name = doc["name"].getString();
    exchange = doc["exchange"].getString();
    logo = doc["logo"].getString();
    marketCap = doc["marketCapitalization"].getFloat();
}

void Stock::updateCandles(const string& resolution) {
    string resolution = resolution; // This can be 1, 5, 15, 30, 60, D, W or M in string format
    // Have to do some research on UNIX timestamps for the 2 variables below
    string from = "insert UNIX timestamp from a certain predetermined point";
    string to = "insert UNIX timestamp to now";
    cpr::Response r = cpr::Get(cpr::Url{"https://finnhub.io/api/v1/stock/candle"},
                      cpr::Parameters{{"symbol", symbol}, {"resolution", resolution}, {"from", from}, {"to", to}, {"token", "bu4gihf48v6p8t6gh4bg"}});
    
    const char* text = r.text.c_str();
    Document d;
    d.Parse(text);
    candles = "find a good way to set the candles here in some vector format";
}

void Stock::updateNews()  {
    string fromDate = "2020-09-19";
    string currentDate = "2020-10-19";
    cpr::Response r = cpr::Get(cpr::Url{"https://finnhub.io/api/v1/company-news"},
                      cpr::Parameters{{"symbol", symbol}, {"from", fromDate}, {"to", currentDate},  {"token", "bu4gihf48v6p8t6gh4bg"}});
    
    const char* text = r.text.c_str();
    Document d;
    d.Parse(text);
    cout << r.text << endl; // Look at what the data looks  like
    
    for (i=0; i<4; i++) {
        struct news  {
            string headline = d[i]["headline"].getString();
            string image = d[i]["image"].getString();
            string url = d[i]["url"].getString();
            string source = d[i]["source"].getString();
            string datetime = convertDateTime(d[i]["datetime"].getString());
        }
        // companyNews IS GOING TO BE AN ARRAY OF news STRUCTS WITH A PREDEFINED SIZE OF 4. CAN CHANGE LENGTH LATER
        companyNews.append(news);
    }
}


float getCurrentPrice() {
    return currentPrice;
}

float getOpenPrice() {
    return openPrice;
}

float getPL() {
    return currentPrice - openPrice;
}

float getMarketCap() {
    return marketCap;
}

float getDailyHigh() {
    return dailyHigh;
}

float dailyLowHigh() {
    return dailyLow;
}

vector<string> getNews(vector <string> news);
void generateGraph(int candles); //Creates a graph object

// CONVERT DATETIME FROM 155458347 to something readable
string convertDateTime(int &datetime) {
    return "";
}