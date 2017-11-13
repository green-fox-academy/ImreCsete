#include <iostream>
#include <string>

using namespace std;

#include "person.cpp"

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

int main()
{
    using namespace Person;

    cout << "Your name is " << name << "." << endl << "You are " << age << " years old." << endl << favourite_number << " is your favourite number." << endl;

    return 0;
}
