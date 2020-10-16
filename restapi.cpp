#include <cpr/cpr.h>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace rapidjson;
using namespace std;

int main(int argc, char** argv) {
    cpr::Response r = cpr::Get(cpr::Url{"https://finnhub.io/api/v1/quote"},
                      cpr::Parameters{{"symbol", "AAPL"}, {"token", "bu4gihf48v6p8t6gh4bg"}});
    
    const char* text = r.text.c_str();
    
    Document  d;
    d.Parse(text);

    float price = d["c"].GetFloat();
    float open = d["c"].GetFloat();
    double time = d["c"].GetDouble();

    cout << "FAM IT WORKS!!" << endl;
    cout << "Current market price for AAPL is " << price << endl;

    return 0;
}