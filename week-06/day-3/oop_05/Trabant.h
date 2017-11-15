#ifndef TRABANT_H
#define TRABANT_H
#include <string>

using namespace std;

class Trabant: public Car
{
    public:
        Trabant(int age, float kms_ran, string manufacturer, int number_of_seats): Car(age, kms_ran, manufacturer, number_of_seats){};
        float get_kms_ran();

    protected:

    private:
};

#endif // TRABANT_H
