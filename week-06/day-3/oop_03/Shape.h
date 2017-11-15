#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:
        virtual float calc_area();
        float get_area();
        float how_much_to_paint(float area, int money);
        void set_paint_cost(int x);
        int get_paint_cost();

    private:
        float area;
        int paint_cost;
};

#endif // SHAPE_H
