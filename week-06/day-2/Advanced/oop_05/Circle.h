#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>

using namespace std;

class Circle {
    private:
        float radius;

    public:
        Circle(float radius);
        float get_radius();
        float get_circumference(float radius);
        float get_area(float radius);
};
#endif // CIRCLE_H
