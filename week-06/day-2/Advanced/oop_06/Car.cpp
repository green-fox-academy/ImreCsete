#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string type, unsigned int km) {
    this->type = type;
    this->km = km;
}
unsigned int Car::get_km() {
    return km;
}

string Car::get_type() {
    return type;
}

void Car::run(unsigned int add_km) {
    int i;
    for (i = 0; i < add_km; i++);
    km = km + i;
}
