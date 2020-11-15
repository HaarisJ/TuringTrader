#pragma once

//#ifdef PORTFOLIODLL_EXPORTS
#define PORTFOLIODLL __declspec(dllexport)
//#else
//#define TRADINGDLL __declspec(dllimport)
//#endif

#include <string>
#include <vector>

using namespace std;

class PORTFOLIODLL Portfolio {
private:
    int totalValue;
    vector<string> holdings;
    int profitLoss;
    int numHoldings; //--> Stock??
    int buyingPower;

public:
    int buyShares();
    int sellShares();
    int getValue(int totalValue);
    int getPL(int profitLoss);
    int getBuyingPower(int buyingPower);
    vector<string> getStocks();
};
