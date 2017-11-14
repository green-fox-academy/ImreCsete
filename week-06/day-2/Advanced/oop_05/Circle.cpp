#include "Circle.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

Circle::Circle(float radius) {
    this->radius = radius;
}

float Circle::get_radius() {
    return radius;
}

float Circle::get_circumference(float radius) {
    float circumference = (radius * 2) * 3.14;
    return circumference;
}

float Circle::get_area(float radius) {
    float area = pow(radius, 2) * 3.14;
    return area;
}
