#include "Pirate.h"
#include "Pirate.cpp"
#include <iostream>
#include <string>

using namespace std;

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

int main()
{
    int drinks;
    cout << "You are tending to your bar when a pirate walks in." << endl << "He asks for as much rum as you have in stock." << endl << "How many drinks do you want the pirate to drink? ";
    cin >> drinks;

    Pirate pirate;

    cout << endl << "You ask the pirate after each drink how is it going." << endl << endl;

    for (int i = 0; i < drinks; i++) {
            pirate.drink_rum();
        cout << "After " << pirate.get_rum() << " rum the pirate says " << pirate.hows_goin_mate() << endl;

    }

    return 0;
}

