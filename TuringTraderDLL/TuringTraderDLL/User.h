#pragma once


//#ifdef USERDLL_EXPORTS
#define USERDLL __declspec(dllexport)
//#else
//#define USERDLL __declspec(dllimport)
//#endif


#include <string>
#include <vector>

using namespace std;

class USERDLL User {
private:
    int userID;
    vector<string> username;
    vector<string> password;
    vector<string> email;

public:
    int getUserID(int userID);
    int getUsername(vector<string> username);
    vector<string> getUserEmail(vector<string> email);
};