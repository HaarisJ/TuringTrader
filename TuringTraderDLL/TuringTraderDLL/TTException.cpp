#include "pch.h"
#include "TTException.h"

using namespace std;

TTException::TTException(const string& m) : message(m) {}

string TTException::what() const { return message; }