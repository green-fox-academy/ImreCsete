#include <iostream>
#include <string>
#include "Car.h"
#include "Car.cpp"
#include "Trabant.h"
#include "Trabant.cpp"
#include "Navarra.h"
#include "Navarra.cpp"

using namespace std;

// Create a Car class.
// Create the following private variables : age, kms_ran, manufacturer, number_of_seats
// use proper variable types.
// Implement a method which has one parameter, and increases the kms_ran variable by its parameter value.
// Implement a method which can add a person to a car, if the number of persons in the car reached
// the value of number of seats in the car it should tell you that 'The car is full!' or something like that.
// Inherit at least two car models and try out the methods you have created.


int main()
{
    Navarra nv(10, 200234, "Nissan Motor Co., Ltd", 5);
    Trabant tb(35, 5620234, "VEB Sachsenring Automobilwerke Zwickau", 5);

    return 0;
}
