#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:
        virtual float calc_area();
        float get_area();

    private:
        float area;
};

#endif // SHAPE_H
