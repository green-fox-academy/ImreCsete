#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Format: vector<DataType> nameOfVector
    // myVector.push_back(value) -> adds element to the end of the vector and also resizes it
    // myVector.at(index)
    // myVector.size()
    // myVector.begin() reads from index 0
    // myVector.insert(myVector.begin() + integer, new value) -> adds element before specified index number
    // myVector.erase(myVector.begin() + integer) -> removes element at specified index
    // myVector.clear() -> removes all element
    // myVector.empty() -> returns boolean if empty

    vector<int> myVector;

    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(4);
    myVector.push_back(12);
    myVector.push_back(9);

    cout << "Vector: ";

    for (unsigned int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    cout << endl;

    myVector.insert(myVector.begin() + 3, 5);

    cout << "Vector: ";

    for (unsigned int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    cout << endl;

    myVector.erase(myVector.begin() + 4);

    cout << "Vector: ";

    for (unsigned int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    cout << endl;

    if (myVector.empty()) {
        cout << endl << "Is empty!";
        }

    else {
        cout << endl << "Is Not Empty!";
    }

    cout << endl;

    myVector.clear();

        if (myVector.empty()) {
        cout << endl << "Is empty!";
        }

    else {
        cout << endl << "Is Not Empty!";
    }

    cout << endl;

    return 0;
}
