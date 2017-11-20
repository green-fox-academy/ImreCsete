#include <iostream>

using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

    int try_int = 0;

    try {
        cout << "Please enter the number 42." << endl;
        cin >> try_int;

        if (try_int != 42) {
            throw 0;
        } else cout << "Congratulations, your ability to follow instructions is amazing!" << endl;

    }   catch (int x) {
        cout << "ERROR: " << try_int << " is not 42." << endl;
    }

	return 0;
}
