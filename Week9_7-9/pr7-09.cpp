// This program passes an object to a function. It passes it 
// to one function by reference and to another by value.
#include <iostream>
#include <iomanip> // setprecision
#include <string> // string class
#include "InventoryItem.h" 
#include "Utility.h"
using namespace std;

//*************** main *****************
int main()
{
	InventoryItem part;            // part is an InventoryItem object
	InventoryItem p(100, "Yellow Hammer", 1001, 99.99);
	Utility u;

	u.showValues(part);
	//u.storeValues(part);      
	u.showValues(p);

	return 0;
}