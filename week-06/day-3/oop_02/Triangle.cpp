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

float Triangle::get_area()
{
    return area;
}

float Triangle::get_height()
{
    return height;
}

void Triangle::set_area(float x)
{
    area = x;
}

void Triangle::set_height(float x)
{
    height = x;
}

float Triangle::calc_area(float a, float b, float c)
{
    float s = (float)(a + b + c) / 2;

	float area = sqrt (s * (s - a) * (s - b) * (s - c));

   return area;
}

float Triangle::calc_height(float a, float b, float c)
{
	float s = ((a + b + c) / 2 == sqrt (s * (s - a) * (s - b) * (s - c))) / b;

	return s;
}








