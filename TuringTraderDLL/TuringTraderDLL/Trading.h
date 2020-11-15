#pragma once

//#ifdef TRADINGDLL_EXPORTS
#define TRADINGDLL __declspec(dllexport)
//#else
//#define TRADINGDLL __declspec(dllimport)
//#endif

#include <string>
#include <vector>
#include "Stock.h"

using namespace std;

class TRADINGDLL Trading {

public:
	vector<Stock> viewTrending();
	void bigIndexVals();
	vector<Stock> stockSearch(string search);
	vector<Stock> viewWatchlist();

private:
	vector<Stock> stock;
};