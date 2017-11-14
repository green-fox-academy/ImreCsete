#include "Student.h"
#include "Student.cpp"
#include <iostream>
#include <string>

using namespace std;

    // Create a new instance of the Student class and set it's name to "John" and
    // it's age to 21

int main()
{
    Student student1;

    student1.set_name("John");

    student1.set_age(21);

    cout << student1.name << endl << student1.age << endl;

    return 0;
}

