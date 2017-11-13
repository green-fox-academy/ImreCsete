#include <iostream>
#include <vector>

using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main()
{
    vector <int> integer_vector;

    integer_vector.push_back(1);
    integer_vector.push_back(2);
    integer_vector.push_back(4);
    integer_vector.push_back(8);
    integer_vector.push_back(16);

    cout << integer_vector.at(2);

    return 0;
}
