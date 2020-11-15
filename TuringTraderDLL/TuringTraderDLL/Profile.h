#pragma once


//#ifdef PROFILEDLL_EXPORTS
#define PROFILEDLL __declspec(dllexport)
//#else
//#define PROFILEDLL __declspec(dllimport)
//#endif


#include <string>
#include <vector>

using namespace std;

class PROFILEDLL Profile {

public:
	void resetAccount();
	void tutorialGuide() const;
	void changeContactInfo(string attribute, string changeTo);
	string getUsername() const;
	string getPassword() const;
	string getEmail() const;
	string getphoneNumber() const;
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