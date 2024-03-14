#pragma once
#include "InventoryItem.h"

class Utility
{
private:

public:
	// Function prototypes for client program
	void storeValues(InventoryItem&);  // Receives an object by reference
	void showValues(InventoryItem);   // Receives an object by value
};