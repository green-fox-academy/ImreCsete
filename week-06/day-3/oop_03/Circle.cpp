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

void Circle::set_circumference(float x)
{
    circumference = x;
}

void Circle::set_area(float x)
{
    area = x;
}

float Circle::get_circumference()
{
    return circumference;
}

float Circle::get_area()
{
    return area;
}

float Circle::calc_circumference(float radius)
{
    float circumference = (radius * 2) * 3.14159;

    return circumference;
}

float Circle::calc_area(float radius)
{
    float area = pow(radius, 2) * 3.14159;

    return area;
}
