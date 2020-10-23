#pragma once

#include <string>
#include <vector>

using namespace std;

class Portfolio{
    private: 
        int totalValue;
        vector <string> holdings;
        int profitLoss;
        int numHoldings; //--> Stock??
        int buyingPower;

    public:
        int buyShares();
        int sellShares();
        int getValue(int totalValue);
        int getPL(int profitLoss);
        int getBuyingPower(int buyingPower);
        vector <string> getStocks();      
};

class Stock{
    private:
        vector <string> ticker;
        vector <string> logo; 
        int currentPrice;
        int openPrice;
        int dailyLow;
        int dailyHigh;
        int marketCap;
        vector <string> news; 
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
        vector <string> getNews(vector <string> news);
        void generateGraph(int candles); //Creates a graph object     
};

class User{
    private:
        int userID;
        vector <string> username;
        vector <string> password;
        vector <string> email;

    public:
        int getUserID(int userID);
        int getUsername(vector <string> username);
        vector <string> getUserEmail(vector <string> email);
};

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
