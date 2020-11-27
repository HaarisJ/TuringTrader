#include "Stock.h"
#include "Holding.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int main() {

	Stock apple("AAPL");
	apple.updateMarketVals();
	apple.updateProfile();
	apple.updateNews();
	apple.updateCandles("W");
	float price = apple.getCurrentPrice();

	// Example of running API calls on Holding class
	Holding* tesla = new Holding("TSLA", 2, 600);

	tesla->addShares(2, 800);
	int nums = tesla->getAvgPrice();
	int qty = tesla->getQty();
	tesla->updateMarketVals();

	float marketPrice = tesla->getMarketPrice();

	return 0;
};