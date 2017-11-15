#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

Car::Car(int age, float kms_ran, string manufacturer, int number_of_seats)
{
    this->age = age;
    this->kms_ran = kms_ran;
    this->manufacturer = manufacturer;
    this->number_of_seats = number_of_seats;
}

float Car::get_kms_ran()
{
    return kms_ran;
}
