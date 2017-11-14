#include "Pirate.h"
#include <iostream>
#include <string>

using namespace std;

Pirate::Pirate() {
    rum = 0;
}

unsigned int Pirate::get_rum() {
    return rum;
}

void Pirate::drink_rum() {
    rum = rum + 1;
}

string Pirate::hows_goin_mate() {
    string arrrr = "Arrrr!";
    string nothin = "Nothin'";

    if (rum >= 5) {
        return arrrr;
    } else
        return nothin;
}

