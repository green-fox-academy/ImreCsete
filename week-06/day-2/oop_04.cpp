#include <iostream>
#include <string>

using namespace std;

class House {
    private:
        string address;
        unsigned int area;
        unsigned int price;

    public:
        string get_address() {
            return address;
        }
        unsigned int get_price() {
            return this->price * this->area;
        }

    House(string address, unsigned int area) {
        this->address = address;
        this->area = area;
        this->price = 400;
    }

};

    // The market price of the houses is 400 EUR / square meters
    // Make the get_price() function work
    // Create a constructor for the House class that takes it's address and area.

int main()
{

    House house = House("Andrassy 66", 349);

    cout << "The price of the house on " << house.get_address() << " is " << house.get_price() << " EUR." << endl;

    return 0;
}
