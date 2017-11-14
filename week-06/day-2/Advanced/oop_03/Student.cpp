#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

    Student::Student(string name, unsigned int age) {
        this->age = age;
        this->name = name;
    }

    string Student::greet(string name) {

        string greetings = "Hello my name is: ";

        return greetings + name;
    }
