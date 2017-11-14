#include "Circle.h"
#include "Circle.cpp"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

int main()
{
    Circle circle(5);

    cout << "The circumference of the circle is: " << fixed << setprecision(2) << circle.get_circumference(circle.get_radius()) << endl << "The area of the circle is: " << circle.get_area(circle.get_radius()) << endl;

    return 0;
}
