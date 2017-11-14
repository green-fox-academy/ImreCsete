#include <iostream>
#include <string>

using namespace std;

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

class Pirate {
    private:
        unsigned int rum;

    public:
        Pirate() {
            rum = 0;
        }

        unsigned int get_rum() {
            return rum;
        }

        void drink_rum() {
            rum = rum + 1;
        }

        string hows_goin_mate() {
            string arrrr = "Arrrr!";
            string nothin = "Nothin'";

            if (rum >= 5) {
                return arrrr;
            } else
                return nothin;
        }

};

int main()
{
    Pirate pirate;

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    pirate.drink_rum();

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    pirate.drink_rum();

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    pirate.drink_rum();

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    pirate.drink_rum();

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    pirate.drink_rum();

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    pirate.drink_rum();

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    pirate.drink_rum();

    cout << pirate.get_rum() << " " << pirate.hows_goin_mate() << endl;

    return 0;
}
