#include "Shape.h"

float Shape::calc_area()
{
    return area;
}

float Shape::get_area()
{
    return area;
}

float Shape::how_much_to_paint(float area, int money)
{
    float cost = area * money;
    return cost;
}

void Shape::set_paint_cost(int x)
{
    paint_cost = x;
}

int Shape::get_paint_cost()
{
    return paint_cost;
}
