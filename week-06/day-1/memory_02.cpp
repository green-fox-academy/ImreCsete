#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main()
{
    int *counter;
    vector <int> *counter_vector;
    int *sum;

    cout << "Please add a counter number: ";

    counter = new int;

    cin >> *counter;

    counter_vector = new vector <int>;

    counter_vector->resize(*counter);

    int *temp;

    temp = new int;

    for (int i = 0; i < *counter; i++) {
        cout << "Enter number " << i + 1 << ":" << endl;
        cin >> *temp;
        counter_vector->at(i) = *temp;
    }

    cout << endl << "The average of the given " << *counter << " numbers are: ";

    sum = new int;

    *sum = accumulate(counter_vector->begin(), counter_vector->end(), 0);

    cout << fixed << setprecision(2) << ((float)*sum / *counter) << endl;

    delete counter, counter_vector, temp, sum;

    return 0;
}
