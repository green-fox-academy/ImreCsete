#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

int main() {
	srand(time(NULL)); // This initializes the random generator.
	int rnd = 0;
	for (int i = 0; i < 20; i++) {
		rnd = rand() % 5; // generate a random number in the range [0, 4]
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw "Abrakadabra";
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		}

// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.

        catch(float f) {
            cout << "ERROR: " << f << "\t\tValue type: " << typeid(f).name() << endl;
        }
        catch(double d) {
            cout << "ERROR: " << d << "\t\tValue type: " << typeid(d).name() << endl;
        }
        catch(char const *s) {
            cout << "ERROR: " << s << "\tValue type: " << typeid(s).name() << endl;
        }
        catch(bool b) {
            cout << "ERROR: " << boolalpha << b << "\t\tValue type: " << typeid(b).name() << endl;
        }
        catch(int x) {
            cout << "ERROR: " << x << "\t\tValue type: " << typeid(x).name() << endl;
        }
    }

	return 0;
}
