#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * Create a function that prints a multiplication table with a given base number.
 * It should take the base number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exceptions
 */

void multiplication_table(int multiplicant, int multiplier_range);

int main()
{
    int a = 0;
    int range = 0;

    cout << "Enter the number you wish to multiply: ";
    cin >> a;

    cout << "Enter the range of the multiplier: ";
    cin >> range;

    try {

        if (a < 0 || range < 0) {
            throw runtime_error("Invalid number");
        } else multiplication_table(a, range);
    } catch(runtime_error &error) {
        cout << "ERROR: " << error.what() << endl;
    }

    return 0;
}

void multiplication_table(int base, int multiplier_range)
{
    for (int i = 0; i < multiplier_range; i++) {
        cout << base << " * " << i << " = " << base * i << endl;
    }
}
