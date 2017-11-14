#ifndef PIRATE_H
#define PIRATE_H
#include <iostream>
#include <string>

using namespace std;

class Pirate {
    private:
        unsigned int rum;
    public:
        Pirate();
        unsigned int get_rum();
        void drink_rum();
        string hows_goin_mate();
};

#endif // PIRATE_H
