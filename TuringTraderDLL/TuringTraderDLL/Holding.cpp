#include "pch.h"

#include "Holding.h"

using namespace std;

HOLDINGDLL Holding::Holding(string symb, int numShares, float cost) {
	ticker = symb;
	qty = numShares;
	totalCost = cost;
}

HOLDINGDLL string Holding::getTicker() { return ticker; }

HOLDINGDLL int Holding::getQty() { return qty; }

HOLDINGDLL float Holding::getTotalCost() { return totalCost; }

HOLDINGDLL void Holding::addShares(int numNewShares, float cost) {
	qty = qty + numNewShares;
	totalCost = totalCost + cost;
}

HOLDINGDLL void Holding::removeShares(int numNewShares, float cost) {
	qty = qty - numNewShares;
	totalCost = totalCost - cost;
}

HOLDINGDLL float Holding::getAvgPrice() {
	return totalCost / qty;
}