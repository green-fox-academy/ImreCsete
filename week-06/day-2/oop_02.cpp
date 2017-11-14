#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        unsigned int age;

        Student(string name, unsigned int age) {
            this->age = age;
            this->name = name;
        }
};

    // Create a new instance of the Student class and set it's name to "John" and
    // it's age to 21 with it's constructor

int main()
{
    Student student1("John", 21);

    cout << student1.name << endl << student1.age << endl;

    return 0;
}
