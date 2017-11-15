#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape
{
    public:
        Circle(float radius);
        float get_area();
        float get_radius();
        float get_circumference();
        void set_circumference(float x);
        void set_area(float x);
        float calc_circumference(float radius);
        float calc_area(float radius);

    private:
        float radius;
        float area;
        float circumference;
};

#endif // CIRCLE_H
