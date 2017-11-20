#include <iostream>
#include <stdexcept>

using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a parameter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  Negative numbers are invalid parameters.
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  It should throw an exception
 */

int get_fibonacci_number(int number);

int main() {

    int a = 0;

    cout << "Please enter the which Fibonacci number you want to get: ";
    cin >> a;

    try {
        if (a < 0) {
            throw runtime_error("Invalid number");
        } else cout << get_fibonacci_number(a) << endl;

    } catch(runtime_error &error) {
            cout << "ERROR: " << error.what() << "." << endl;
    }

    return 0;
}

int get_fibonacci_number(int number)
{
    int a = 0;
    int b = 1;
    int c;
    int i;

    if (number == 0)
        return a;

    for (i = 2; i <= number; i++) {
        c = a + b;
        a = b;
        b = c;
    }

  return b;
}
