#include <stdio.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

void stats(CarType);

int main()
{
    stats(TESLA);

    return 0;
}

void stats(CarType)
{
    struct Car volvo = {0, 100, 200};
    struct Car toyota = {0, 450, 250};
    struct Car land_rover = {0, 300, 240};
    struct Car tesla = {0, 100, 0};

    if (CarType == 0)
        printf("The stats for Volvo are: %f kilometers, %f litres of gas\n", volvo.km, volvo.gas);
    if (CarType == 1)
        printf("The stats for Toyota are: %f kilometers, %f litres of gas\n", toyota.km, toyota.gas);
    if (CarType == 2)
        printf("The stats for Land Rover are: %f kilometers, %f litres of gas\n", land_rover.km, land_rover.gas);
    if (CarType == 3)
        printf("The stats for Tesla are: %f kilometers\n", tesla.km);
}
