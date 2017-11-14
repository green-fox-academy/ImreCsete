#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
#include <string>

using namespace std;

class House {
    private:
        string address;
        unsigned int area;
        unsigned int price;

    public:
        string get_address();
        unsigned int get_price();

    House(string address, unsigned int area);
};

#endif // HOUSE_H
