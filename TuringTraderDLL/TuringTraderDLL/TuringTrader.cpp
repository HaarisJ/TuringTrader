#include "TuringTrader.h"
#include <string>
#include <vector>

using namespace std;

int Portfolio::buyShares() {

};

int Portfolio::sellShares() {

};

int Portfolio::getValue(int totalValue) {

};

int Portfolio::getPL(int profitLoss) {

};

int Portfolio::getBuyingPower(int buyingPower) {

};

vector<string> Portfolio::getStocks() {

};

// constructor, creates API objects, sets all private attributes
Stock::Stock() :dailyHigh(0) {};


// updates currentPrice, openPrice, dailyLow, dailyHigh, marketCap, news, candles
void Stock::updateMarketVals() {

};

int Stock::getCurrentPrice() {

};

int Stock::getOpenPrice() {

};

int Stock::getPL() {

}; //two getPL functions? 

int Stock::getMarketCap(int marketCap) {

};

vector<string> Stock::getNews(vector <string> news) {

};

void Stock::generateGraph(int candles) {

}; //Creates a graph object     

int User::getUserID(int userID) {

};

int User::getUsername(vector<string> username) {

};

vector<string> User::getUserEmail(vector<string> email) {

};

string Group::getName() const {
    return Name;
};

string Group::getJoinCode() const {
    return joinCode;
};

vector<string> Group::getGroupMembers() const {
    return groupMembers;
};

vector<Stock> Trading::viewTrending() {

};

void Trading::bigIndexVals() {

};

vector<Stock> Trading::stockSearch(string search) {

};

vector<Stock> Trading::viewWatchlist() {

};

void Profile::resetAccount() {

};

void Profile::tutorialGuide() const {

};

void Profile::changeContactInfo(string attribute, string changeTo) {

};

string Profile::getUsername() const {
    return username;
};

string Profile::getPassword() const {
    return password;
};

string Profile::getEmail() const {
    return email;
};

string Profile::getphoneNumber() const {
    return phoneNumber;
};

void Profile::setUsername() {

};

void Profile::setPassword() {

};

void Profile::setEmail() {

};

void Profile::setphoneNumber() {

};