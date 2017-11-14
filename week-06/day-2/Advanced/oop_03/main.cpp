#include <iostream>
#include <string>
#include "Student.h"
#include "Student.cpp"

using namespace std;

    // Create a method on the Student class called "greet" that returns a string
    // like: "Hello my name is: <student name>"

int main()
{
    Student student1("John", 21);

    cout << student1.greet(student1.name) << "!" << endl;

  return 0;
}

