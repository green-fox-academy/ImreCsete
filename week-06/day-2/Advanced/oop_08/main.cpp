#include "Student.h"
#include "Student.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iomanip>

using namespace std;

int main()
{
    int grade_count;

    cout << "How many grades do you wish to add?: ";
    cin >> grade_count;

    Student student;

    for (int i = 0; i < grade_count; i++) {
        student.add_grade();
    }

    cout << "The grades are: ";

    student.get_grade();

    cout << endl << fixed << setprecision(2) << "The average of the grades are: " << student.get_average() << endl;

    return 0;
}
