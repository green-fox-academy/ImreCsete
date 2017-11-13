#include <iostream>
#include <string>

using namespace std;

// Greet 3 of your classmates with this program, in three separate lines
// like:
//
// Hello, Esther!
// Hello, Mary!
// Hello, Joe!
// Store their names in separate string type variables


int main()
{
    string name1 = "";

    string name2 = "";

    string name3 = "";

    cout << "Please enter the first name: ";

    cin >> name1;

    cout << "Please enter the second name: ";

    cin >> name2;

    cout << "Please enter the third name: ";

    cin >> name3;

    cout << endl << "Hello, " << name1 << "!" << endl << "Hello, " << name2 << "!" << endl << "Hello, " << name3 << "!" << endl;

    return 0;
}
