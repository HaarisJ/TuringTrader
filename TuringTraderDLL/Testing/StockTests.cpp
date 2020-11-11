#include "Stock.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int main() {

	Stock apple("AAPL");
	apple.updateMarketVals();
	float price = apple.getCurrentPrice();

	char buffer[100];
	sprintf_s(buffer, "MESSAGE: Apple's Market Price atm: %f\n", price);

	OutputDebugString(L"\n \n \n");
	OutputDebugStringA(buffer);
	OutputDebugString(L"\n \n \n");

	return 0;
};