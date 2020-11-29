#pragma once

//#ifdef STOCKDLL_EXPORTS
#define STOCKDLL __declspec(dllexport)
//#else
//#define STOCKDLL __declspec(dllimport)
//#endif

using namespace std;
//using namespace rapidjson;
#include <string>
#include <vector>

class STOCKDLL Stock {
public:
    struct news {
        string headline;
        string image;
        string url;
        string source;
        string date;
    };
private:
    string ticker;
    float currentPrice;
    float openPrice;
    float dailyLow;
    float dailyHigh;
    float marketCap;

    vector<news> companyNews;
    vector<float> candles;
    vector<int> candleTimes;

public:
    string name;
    string exchange;
    string logo;
    // constructor, creates API objects, sets all private attributes
    Stock(const string& symbol);
    // updates currentPrice, openPrice, dailyLow, dailyHigh, marketCap, news, candles
    void updateMarketVals();
    void updateProfile();
    void updateCandles(const string&);
    void updateNews();

    float getCurrentPrice();
    float getOpenPrice();
    float getPL();
    float getMarketCap();
    float getDailyHigh();
    float getDailyLow();
    vector<float> getCandles();
    vector<int> getCandleTimes();
    vector<news> getNews();
    string unixTimeToHumanReadable(long int seconds);
};
