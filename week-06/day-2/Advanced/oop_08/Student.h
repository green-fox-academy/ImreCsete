#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    private:
        vector <int> grade;
    public:
        Student ();
        void add_grade();
        void get_grade();
        float get_average();
};

#endif // STUDENT_H
