#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iomanip>

using namespace std;

    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

class Student {
    private:
        vector <int> grade;
    public:
        Student () {
        grade[0];
        }

        void add_grade() {
            grade.push_back(rand() % 5 + 1);
        }

        void get_grade() {
            for (unsigned int i = 0; i < grade.size(); i++) {
                cout << grade[i] << ", ";
            }
        }

        float get_average() {
            float avg = accumulate(grade.begin(), grade.end(), 0) / (float)grade.size();
            return avg;
        }
};

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
