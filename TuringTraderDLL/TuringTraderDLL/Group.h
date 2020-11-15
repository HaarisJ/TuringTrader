#pragma once

//#ifdef GROUPDLL_EXPORTS
#define GROUPDLL __declspec(dllexport)
//#else
//#define GROUPDLL __declspec(dllimport)
//#endif

#include <string>
#include <vector>

using namespace std;

class GROUPDLL Group {

public:
	string getName() const;
	string getJoinCode() const;
	vector<string> getGroupMembers() const;

private:
	string Name;
	string joinCode;
	vector<string> groupMembers;
	int numMembers;


};
