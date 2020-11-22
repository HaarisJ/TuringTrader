#pragma once

#include <string>
using namespace std;

// Definition of basic exception class to be used as needed in TuringTrader application
class TTException
{
public:
	TTException(const string&);
	string what() const;

private:
	string message;

};

