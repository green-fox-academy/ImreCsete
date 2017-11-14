#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
        string type;
        unsigned int km;
    public:
        Car(string type, unsigned int km);
        unsigned int get_km();
        string get_type();
        void run(unsigned int add_km);
};

#endif // CAR_H
