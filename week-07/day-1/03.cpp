#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throws a bulit-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {

    int a;
    int b;

    try {
        cout << "This program will calculate the number 'c' by dividing 'a' with 'b'." << endl << endl << "Please don't divide by zero." << endl << endl;

        cout << "Enter number a: ";
        cin >> a;
        cout << "Now enter number b: ";
        cin >> b;

        float c = (float)a / b;

        if (b == 0) {
            throw runtime_error("b is zero.\nI am disappointed in you.");
        } else cout << fixed << setprecision(1) << endl << a << " / " << b << " = " << c << endl << endl << "Congratulations, your ability to follow instructions is amazing!" << endl;

    }   catch (runtime_error &error) {
        cout << "ERROR: " << error.what();
    }

	return 0;
}
