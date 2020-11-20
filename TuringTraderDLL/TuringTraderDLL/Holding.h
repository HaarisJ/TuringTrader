#pragma once

#define HOLDINGDLL __declspec(dllexport)

using namespace std;
#include "Stock.h"
#include <string>

class HOLDINGDLL Holding: public Stock {
	private:
		string ticker;
		int qty;
		float totalCost;
		float avgPrice;

	public:
		Holding(string symb, int numShares, float cost);
		string getTicker();
		int getQty();
		float getTotalCost();
		void addShares(int, float);
		void removeShares(int, float);
		float getAvgPrice();
		float getMarketPrice();

};