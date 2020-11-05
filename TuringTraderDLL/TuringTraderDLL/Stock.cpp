#include "pch.h"

#include <cpr/cpr.h>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "Stock.h"

using namespace std;
using namespace rapidjson;

STOCKDLL Stock::Stock(string symb) : symbol(symb) {}

STOCKDLL float Stock::getPrice() {
    cpr::Response r = cpr::Get(cpr::Url{ "https://finnhub.io/api/v1/quote" },
        cpr::Parameters{ {"symbol", symbol}, {"token", "bu4gihf48v6p8t6gh4bg"} });

    const char* text = r.text.c_str();

    Document d;
    d.Parse(text);

    float price = d["c"].GetFloat();
    return price;
};