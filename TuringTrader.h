#pragma once

#include <string>
#include <vector>

using namespace std;

class Portfolio{
    private: 
        int totalValue;
        vector<string> holdings;
        int profitLoss;
        int numHoldings; //--> Stock??
        int buyingPower;

    public:
        int buyShares();
        int sellShares();
        int getValue(int totalValue);
        int getPL(int profitLoss);
        int getBuyingPower(int buyingPower);
        vector<string> getStocks();      
};

class Stock{
    private:
        vector<string> ticker;
        vector<string> logo; 
        int currentPrice;
        int openPrice;
        int dailyLow;
        int dailyHigh;
        int marketCap;
        vector<string> news; 
        int candles;

    public:
        // constructor, creates API objects, sets all private attributes
        Stock();
        // updates currentPrice, openPrice, dailyLow, dailyHigh, marketCap, news, candles
        void updateMarketVals(); 
        int getCurrentPrice();
        int getOpenPrice();
        int getPL(); //two getPL functions? 
        int getMarketCap(int marketCap);
        vector<string> getNews(vector<string> news);
        void generateGraph(int candles); //Creates a graph object     
};

class User{
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

class Group {

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

class Trading {

public:
	vector<Stock> viewTrending();
	void bigIndexVals();
	vector<Stock> stockSearch(string search);
	vector<Stock> viewWatchlist();

private:
	vector<Stock> stock;
};

class Profile {

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
