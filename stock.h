#pragma once

#include "rapidjson/document.h"
using namespace std;
using namespace rapidjson;

class Stock{
    private:
        string symbol;
        string name;
        string exchange;
        string logo; 
        float currentPrice;
        float openPrice;
        float dailyLow;
        float dailyHigh;
        float marketCap;
        vector<struct> companyNews; 
        int candles;

    public:
        // constructor, creates API objects, sets all private attributes
        Stock(const string& symbol);
        // updates currentPrice, openPrice, dailyLow, dailyHigh, marketCap, news, candles
        Document api(const string& endpoint);
        void updateMarketVals(); 
        void updateProfile();
        void updateCandles();
        void updateNews();

        float getCurrentPrice();
        float getOpenPrice();
        float getPL(); //two getPL functions? 
        float getMarketCap();
        vector<string> getNews(vector <string> news);
        void generateGraph(int candles); //Creates a graph object
};

// Non-member function to be used as a helper
string convertDateTime(int &datetime);     

