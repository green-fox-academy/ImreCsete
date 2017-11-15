#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle: public Shape
{
    public:
        Triangle(float a, float b, float c);
        float calc_area(float a, float b, float c);
        float calc_height(float a, float b, float c);
        float get_a();
        float get_b();
        float get_c();
        float get_area();
        float get_height();
        void set_area(float x);
        void set_height(float x);

    private:
        float a, b, c;
        float area;
        float height;

};

#endif // TRIANGLE_H
