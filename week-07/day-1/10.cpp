#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

void odd_numbers(int range);

int main()
{

    int a = 0;

    cout << "Enter how many odd numbers from 0 you wish to print: ";
    cin >> a;

    try {

        if (a <= 0) {
            throw runtime_error("Invalid number");
            } else odd_numbers(a);
        } catch(runtime_error &error) {
            cout << "ERROR: " << error.what() << endl;
    }

    return 0;
}

void odd_numbers(int range)
{
    for (int i = 1; i < (range*2); i+=2) {
        cout << i << ", ";
    } cout << endl;
}
