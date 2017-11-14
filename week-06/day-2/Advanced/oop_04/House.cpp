#include "House.h"
#include <iostream>
#include <string>

using namespace std;

string House::get_address() {
    return address;
}

unsigned int House::get_price() {
    return this->price * this->area;
}

House::House(string address, unsigned int area) {
    this->address = address;
    this->area = area;
    this->price = 400;
}
