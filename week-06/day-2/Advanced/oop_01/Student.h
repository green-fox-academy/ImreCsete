#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        unsigned int age;
        void set_name(string x);
        void set_age(int x);
};

#endif // STUDENT_H
