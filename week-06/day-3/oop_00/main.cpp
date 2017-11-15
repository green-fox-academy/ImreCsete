#include <iostream>
#include "Human.h"
#include "Human.cpp"
#include "SuperHuman.h"
#include "SuperHuman.cpp"
#include "AquaHuman.h"
#include "AquaHuman.cpp"

using namespace std;

// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called traveling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.

int main()
{
    Human h;
    SuperHuman sh;
    AquaHuman ah;

    h.traveling();
    sh.traveling();
    ah.traveling();

    return 0;
}
