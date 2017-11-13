#include <iostream>
#include <vector>

using namespace std;

//create an integer vector with the size of 5 and print all elements of it

int main()
{
    vector <int> integer_vector;

    integer_vector.push_back(32);
    integer_vector.push_back(64);
    integer_vector.push_back(128);
    integer_vector.push_back(256);
    integer_vector.push_back(512);

    for (unsigned int i = 0; i < integer_vector.size(); i++) {
        cout << integer_vector[i] << " ";
    }

    return 0;
}
