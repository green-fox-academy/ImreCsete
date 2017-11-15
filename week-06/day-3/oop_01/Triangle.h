#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle: public Shape
{
    public:
        Triangle(float a, float b, float c);
        float calc_area(float a, float b, float c);
        float get_a();
        float get_b();
        float get_c();

    private:
        float a, b, c;

};

#endif // TRIANGLE_H
