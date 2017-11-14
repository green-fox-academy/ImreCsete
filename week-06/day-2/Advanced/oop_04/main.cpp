#include <iostream>
#include <string>
#include "House.h"
#include "House.cpp"

using namespace std;

    // The market price of the houses is 400 EUR / square meters
    // Make the get_price() function work
    // Create a constructor for the House class that takes it's address and area.

int main()
{

    House house = House("Andrassy 66", 349);

    cout << "The price of the house on " << house.get_address() << " is " << house.get_price() << " EUR." << endl;

    return 0;
}

