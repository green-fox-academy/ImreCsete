#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Create a function which throws a built-in exception
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void throw_integer(int dividend, int divisor, float quotent);

int main() {

    int a;
    int b;
    float c;

    try {
        cout << "This program will calculate the number 'c' by dividing 'a' with 'b'." << endl << endl << "Please don't divide by zero." << endl << endl;

        cout << "Enter number a: ";
        cin >> a;
        cout << "Now enter number b: ";
        cin >> b;

        float c = (float)a / b;

        throw_integer(a, b, c);

    } catch (runtime_error &error) {
        cout << "ERROR: " << error.what();
    }

	return 0;
}

void throw_integer(int dividend, int divisor, float quotent)
{
    if (divisor == 0) {
            throw runtime_error("b is zero.\nI am disappointed in you.");
        } else cout << fixed << setprecision(1) << endl << dividend << " / " << divisor << " = " << quotent << endl << endl << "Congratulations, your ability to follow instructions is amazing!" << endl;
}
