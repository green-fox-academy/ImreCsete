#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle(float radius)
{
    this->radius = radius;
}

float Circle::get_radius()
{
    return radius;
}

float Circle::calc_area(float radius)
{
    float area = pow(radius, 2) * 3.14159;

    return area;
}
