#pragma once

//#ifdef STOCKDLL_EXPORTS
#define STOCKDLL __declspec(dllexport)
//#else
//#define STOCKDLL __declspec(dllimport)
//#endif

using namespace std;
//using namespace rapidjson;
#include <string>

class STOCKDLL Stock {
	private:
        string ticker;
        string name;
        string exchange;
        string logo;
        float currentPrice;
        float openPrice;
        float dailyLow;
        float dailyHigh;
        float marketCap;
        //vector<struct> companyNews;
        int candles;

	public:
        // constructor, creates API objects, sets all private attributes
        Stock(const string& symbol);
        // updates currentPrice, openPrice, dailyLow, dailyHigh, marketCap, news, candles
        //Document api(const string& endpoint);
        void updateMarketVals();
        void updateProfile();
        void updateCandles(const string&);
        void updateNews();

        float getCurrentPrice();
        float getOpenPrice();
        float getPL();
        //float getMarketCap();
        //vector<string> getNews(vector <string> news);
        void generateGraph(int candles); //Creates a graph object
};
