#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        unsigned int age;

    Student(string name, unsigned int age);

    string greet(string name);
};

#endif // STUDENT_H
