#include "Shape.h"
#include "Shape.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "Triangle.h"
#include "Triangle.cpp"
#include <iostream>
#include <cmath>

using namespace std;

// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It should return the costs of the painting

int main()
{
    int money;

    Shape s;
    Circle c(10);
    Triangle t(3, 4, 5);

    c.set_area(c.calc_area(c.get_radius()));
    t.set_area(t.calc_area(t.get_a(), t.get_b(), t.get_c()));

    cout << "How much does the paint cost / square centimeter? ";
    cin >> money;

    s.set_paint_cost(money);

    cout << "The circle costs " << c.how_much_to_paint(c.get_area(), s.get_paint_cost()) << " ImreCoins to paint." << endl;
    cout << "The triangle costs " << t.how_much_to_paint(t.get_area(), s.get_paint_cost()) << " ImreCoins to paint." << endl;

    return 0;
}
