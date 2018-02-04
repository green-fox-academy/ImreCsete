#include <iostream>

using namespace std;

void SomeFunction(int a) {
    cout << "Integer is " << a << endl;
}

void SomeFunction(float f) {
    cout << "Float is " << f << endl;
}

void SomeFunction(double d) {
    cout << "Double is " << d << endl;
}

int main()
{
    int myInt = 23;
    float myFloat = 3.7f;
    double myDoub = 2.3;

    SomeFunction(myInt);
    SomeFunction(myFloat);
    SomeFunction(myDoub);
    SomeFunction(*(float*) &myDoub);

    return 0;
}
