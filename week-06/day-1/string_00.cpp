#include <iostream>
#include <string>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolean variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{
    string name = "";

    int age;

    bool coffee;

    cout << "Please enter your name: ";

    cin >> name;

    cout << "Please enter your age: ";

    cin >> age;

    cout << "Do you like coffee? (1 for YES or 0 for NO) ";

    cin >> coffee;

    cout << endl << "Your name is " << name << "." << endl << "You are " << age << " years old." << endl << name << " loves coffee: " << boolalpha << coffee << endl;

    return 0;
}
