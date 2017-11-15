#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
    public:
        Car(int age, float kms_ran, string manufacturer, int number_of_seats);
        float get_kms_ran();

    private:
        int age;
        float kms_ran;
        string manufacturer;
        int number_of_seats;
};

#endif // CAR_H
