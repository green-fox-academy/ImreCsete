#include "Shape.h"
#include "Shape.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "Triangle.h"
#include "Triangle.cpp"
#include <iostream>
#include <cmath>

using namespace std;

// Continue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

int main()
{
    Circle c(10);
    Triangle t(3, 4, 5);

    c.set_circumference(c.calc_circumference(c.get_radius()));
    c.set_area(c.calc_area(c.get_radius()));

    cout << "The radius of the circle is: " << c.get_radius() << "." << endl;
    cout << "The circumference of the circle is: " << c.get_circumference() << "." << endl;
    cout << "The area of the circle is: " << c.get_area() << "." << endl;

    t.set_area(t.calc_area(t.get_a(), t.get_b(), t.get_c()));
    t.set_height(t.calc_height(t.get_a(), t.get_b(), t.get_c()));

    cout << endl << "The height of the triangle is: " << t.get_height() << "." << endl;
    cout << "The base of the triangle is: " << t.get_area() << "." << endl;
    cout << "The base of the triangle is: " << t.get_b() << "." << endl;

    return 0;
}
