#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

    //create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
    //remove the even numbers, then print the items again

int main()
{
    vector <int> vector_of_integers;

    vector_of_integers.resize(20);

    for (unsigned int i = 0; i < vector_of_integers.size(); i++) {
        vector_of_integers[i] = rand() % 10;
    }

    cout << "The random numbers in the vector are: ";

    for (unsigned int i = 0; i < vector_of_integers.size(); i++) {
        cout << vector_of_integers[i] << " ";
    }

    cout << endl << "After removing the even numbers: ";

    for (unsigned int i = 0; i < vector_of_integers.size(); i++) {
        for (unsigned int i = 0; i < vector_of_integers.size(); i++) {
            if (vector_of_integers[i] % 2 == 0)
            vector_of_integers.erase(vector_of_integers.begin() + i);
        }
    }

    for (unsigned int i = 0; i < vector_of_integers.size(); i++) {
        cout << vector_of_integers[i] << " ";
    }

    return 0;
}
