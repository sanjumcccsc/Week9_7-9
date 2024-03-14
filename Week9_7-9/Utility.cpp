#include "Utility.h"
#include "InventoryItem.h"
#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************
 *                        storeValues                     *
 * This function stores user input data in the members of *
 * an InventoryItem object passed to it by reference.     *
 * ********************************************************/
void Utility::storeValues(InventoryItem& item)
{
	int partNum;                   // Local variables to hold user input    
	string description;
	int qty;
	double price;

	// Get the data from the user
	cout << "Enter data for the new part number \n";
	cout << "Part number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.get();                     // Move past the '\n' left in the
	// input buffer by the last input 
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;

	// Store the data in the InventoryItem object
	item.storeInfo(partNum, description, &qty, price);
}

/********************************************************
 *                       showValues                     *
 * This function displays the member data stored in the *
 * InventoryItem object passed to it by value.          *
 ********************************************************/
void Utility::showValues(InventoryItem item)
{
	cout << fixed << showpoint << setprecision(2) << endl;;
	cout << "Part Number  : " << item.getPartNum() << endl;
	cout << "Description  : " << item.getDescription() << endl;
	cout << "Units On Hand: " << item.getOnHand() << endl;
	cout << "Price        : $" << item.getPrice() << endl;
}