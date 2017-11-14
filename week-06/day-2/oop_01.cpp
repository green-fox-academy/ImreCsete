#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        void set_name(string x) {
            name = x;
        }

        void set_age(int x) {
            age = x;
        }

        string name;
        unsigned int age;
};

    // Create a new instance of the Student class and set it's name to "John" and
    // it's age to 21

int main()
{
    Student student1;

    student1.set_name("John");

    student1.set_age(21);

    cout << student1.name << endl << student1.age;

    return 0;
}
