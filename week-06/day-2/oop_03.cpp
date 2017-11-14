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

    ~Student() {
    }

    string greet(string name) {

        string greetings = "Hello my name is: ";

        return greetings + name;
    }
};

    // Create a method on the Student class called "greet" that returns a string
    // like: "Hello my name is: <student name>"

int main()
{
    Student student1("John", 21);

    cout << student1.greet(student1.name) << "!" << endl;

  return 0;
}
