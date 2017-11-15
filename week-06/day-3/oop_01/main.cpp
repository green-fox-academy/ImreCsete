#include "Shape.h"
#include "Shape.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "Triangle.h"
#include "Triangle.cpp"
#include <iostream>
#include <cmath>

using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)

int main()
{
    Circle c(6);
    Triangle t(3, 4, 5);

    cout << "The area of the circle is: " << c.calc_area(c.get_radius()) << "." << endl;
    cout << "The area of the triangle is: " << t.calc_area(t.get_a(), t.get_b(), t.get_c()) << "." << endl;

    return 0;
}
