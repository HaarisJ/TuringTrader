#pragma once

//#ifdef STOCKDLL_EXPORTS
#define STOCKDLL __declspec(dllexport)
//#else
//#define STOCKDLL __declspec(dllimport)
//#endif

using namespace std;
#include <string>

class STOCKDLL Stock {
	private:
		string symbol;

	public:
		Stock(string symb);
		float getPrice();
};

//STOCKDLL float getPrice();