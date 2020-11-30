#pragma once

//#ifdef NEWSDLL_EXPORTS
#define NEWSDLL __declspec(dllexport)
//#else
//#define NEWSDLL __declspec(dllimport)
//#endif

using namespace std;
//using namespace rapidjson;
#include <string>
#include <vector>

class NEWSDLL News {
public:
    struct news {
        string headline;
        string image;
        string url;
        string source;
        string date;
    };
private:
    vector<news> newsVector;

public:
    News();
    void updateNews();
    vector<news> getNews();
    string unixTimeToHumanReadable(long int seconds);
};
