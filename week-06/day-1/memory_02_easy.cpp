#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main()
{

    int *pointer = NULL;
    int *input;
    int *temp;
    int *sum;

    cout << "Enter the amount of numbers you want in the array: ";

    input = new int;

    cin >> *input;

    pointer = new int[*input];

    temp = new int;

    for (int i = 0; i < *input; i++) {
        cout << "Enter number " << i + 1 << ":" << endl;
        cin >> *temp;
        *(pointer + i) = *temp;
    }

    sum = new int;

    *sum = 0;

    for (int i = 0; i < *input; i++) {
		*sum += *(pointer + i);
	}

    cout << endl << "The avarage of the numbers you have entered is: " << (float)*sum / *input << endl;

    delete []pointer, input, temp, sum;

    return 0;
}
