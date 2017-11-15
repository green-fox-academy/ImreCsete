#ifndef NAVARRA_H
#define NAVARRA_H
#include <string>

using namespace std;

class Navarra: public Car
{
    public:
        Navarra(int age, float kms_ran, string manufacturer, int number_of_seats): Car(age, kms_ran, manufacturer, number_of_seats){};

    protected:

    private:
};

#endif // NAVARRA_H
