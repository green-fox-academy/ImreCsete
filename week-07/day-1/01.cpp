#include <iostream>
#include <iomanip>

using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

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
            throw 0;
        } else cout << fixed << setprecision(1) << endl << a << " / " << b << " = " << c << endl << endl << "Congratulations, your ability to follow instructions is amazing!" << endl;

    }   catch (int x) {
        cout << "ERROR " << x << ": b is zero." << endl << "I am disappointed in you." << endl;
    }

	return 0;
}

