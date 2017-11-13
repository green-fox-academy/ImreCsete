#include <iostream>

using namespace std;

    // Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
    // Please delete the array before the program exits

int main()
{
    int *pointer = NULL;

    pointer = new int [5];

    for (int i = 0; i <= sizeof(pointer); i++)
        pointer[i] = i;

    for (int i = 0; i <= sizeof(pointer); i++)
        cout << pointer[i] << " ";

    delete pointer;

    return 0;
}
