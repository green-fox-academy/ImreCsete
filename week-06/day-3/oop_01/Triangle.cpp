#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle(float a, float b, float c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

float Triangle::get_a()
{
    return a;
}

float Triangle::get_b()
{
    return b;
}

float Triangle::get_c()
{
    return c;
}

float Triangle::calc_area(float a, float b, float c)
{
    float s = (a + b + c) / 2;

	float area = sqrt (s * (s - a) * (s - b) * (s - c));

   return area;
}
