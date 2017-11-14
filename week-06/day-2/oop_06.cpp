#include <iostream>
#include <string>

using namespace std;

    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string for example: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parameter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

class Car {
    private:
        string type;
        unsigned int km;
    public:
        Car(string type, unsigned int km) {
        this->type = type;
        this->km = km;
        }

    unsigned int get_km() {
        return km;
    }
    string get_type() {
        return type;
    }

    void run(unsigned int add_km) {
        for (int i = 0; i < add_km; i++)
        km++;
    }
};

int main()
{
    Car car1 = Car("Mazda", 2342786);

    cout << "The " << car1.get_type() << " car had run for " << car1.get_km() << " kilometers." << endl;

    car1.run(100);

    cout << "After more runtime, the " << car1.get_type() << " car had run for " << car1.get_km() << " kilometers." << endl;

    return 0;
}
