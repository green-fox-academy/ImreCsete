#include <iostream>
#include <string>
#include "Student.h"
#include "Student.cpp"

using namespace std;

    // Create a new instance of the Student class and set it's name to "John" and
    // it's age to 21 with it's constructor

int main()
{
    Student student1("John", 21);

    cout << student1.name << endl << student1.age << endl;

    return 0;
}
