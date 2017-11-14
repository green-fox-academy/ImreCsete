#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <numeric>

using namespace std;

Student::Student () {
    grade[0];
}

void Student::add_grade() {
    grade.push_back(rand() % 5 + 1);
}

void Student::get_grade() {
    for (unsigned int i = 0; i < grade.size(); i++) {
        cout << grade[i] << ", ";
    }
}

float Student::get_average() {
    float avg = accumulate(grade.begin(), grade.end(), 0) / (float)grade.size();
    return avg;
}
