#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

    //Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

int main()
{
    vector <int> vector_of_integers;

    vector_of_integers.resize(10);

    for (unsigned int i = 0; i < vector_of_integers.size(); i++) {
        vector_of_integers[i] = rand() % 10;
    }

    for (unsigned int i = 0; i < vector_of_integers.size(); i++) {
        cout << vector_of_integers[i] << " ";
    }

    return 0;
}
