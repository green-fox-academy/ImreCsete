#include <iostream>

using namespace std;

int main()
{
    int *pointer = NULL;
    cout << "How many items are you going to enter?: " << endl;
    int input;
    cin >> input;

    pointer = new int[input];

    int temp;

    for (int counter = 0; counter < input; counter++) {
        cout << "Enter item " << counter + 1 << ":" << endl;
        cin >> temp;
        *(pointer + counter) = temp;
    }

    cout << "The items you have entered are: " << endl;

    for (int counter = 0; counter < input; counter++){
        cout << counter + 1 << " item is " << *(pointer + counter) << endl;
    }

    delete []pointer;


    return 0;
}
