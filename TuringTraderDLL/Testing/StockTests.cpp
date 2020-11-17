#include "Stock.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int main() {

	Stock apple("AAPL");
	apple.updateMarketVals();
	apple.updateProfile();
	apple.updateCandles("D");
	float price = apple.getCurrentPrice();

	return 0;
};