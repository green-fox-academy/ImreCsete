#include <iostream>
#include <stdexcept>
#include <array>

using namespace std;

//Try to run the following code!

void check_array_size(int current_length, int check_length);

int main () {



    try {

        int int_array[5] = {1, 2, 3, 4, 5};

        int i = 200;

        check_array_size(sizeof(int_array) / sizeof(int_array[0]), i);

        cout << int_array[i];

    } catch(runtime_error &error) {
        cout << "ERROR: " << error.what() << endl;
    }

    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!

void check_array_size(int current_length, int check_length)
{
    if (current_length <= check_length) {
        throw runtime_error("Invalid array length");
    }
}
