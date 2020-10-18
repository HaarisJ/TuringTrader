#pragma once

#include <string>
#include <vector>

using namespace std;

class group {

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

class trading {

public:
	vector<stock> viewTrending();
	void bigIndexVals();
	vector<stock> stockSearch(string search);
	vector<stock> viewWatchlist();

private:
	vector<stock> stock;
};

class profile {

public:
	void resetAccount();
	void tutorialGuide() const;
	void changeContactInfo(string attribute, string changeTo);
	string getUsername();
	string getPassword();
	string getEmail();
	string getphoneNumber();
	void setUsername();
	void setPassword();
	void setEmail();
	void setphoneNumber();

private:
	string username;
	string password;
	string email;
	string phoneNumber;
};
