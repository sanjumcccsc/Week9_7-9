#pragma once
#include <string>
#include <iostream>
using namespace std;

class InventoryItem
{
private:
	int partNum;         // Part number
	string description;  // Item description
	int onHand;          // Units on hand
	double price;        // Unit price

public:
	InventoryItem() // default constructor
	{
		partNum = -1;
		description = "N/A";
		onHand = -1;
		price = -1;
	}

	InventoryItem(int p, string d, int oH, double cost) // overloaded constructor
	{
		partNum = p;
		description = d;
		onHand = oH;
		price = cost;
	}

	~InventoryItem() // destructor
	{
		cout << "Destorying object InventoryItem. \n";
	}
	void storeInfo(int p, string &d, int *oH, double cost); // Prototype

	int getPartNum()
	{
		return partNum;
	}

	string getDescription()
	{
		return description;
	}

	int getOnHand()
	{
		return onHand;
	}

	double getPrice()
	{
		return price;
	}

	void setPartNum(int p)
	{
		partNum = p;
	}

	void setDescription(string s)
	{
		description = s;
	}

	void setOnHand(int oH)
	{
		onHand = oH;
	}

	void setPrice(double p)
	{
		price = p;
	}
};