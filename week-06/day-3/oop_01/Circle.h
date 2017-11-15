#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape
{
    public:
        Circle(float radius);
        float get_radius();
        float calc_area(float radius);

    private:
        float radius;
        ;
};

#endif // CIRCLE_H
