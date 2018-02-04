#include <iostream>
#include <ctime>
#include <windows.h>
#include <typeinfo>

using namespace std;

// Create a class named Person.
// This class should have a constructor which prints out the
// date of the creation of the instance.

class Person {
    public:
        static int &get_counter()
        {
            static int counter = 1;
            return counter;
        }
            int total_count()
        {
            return get_counter()++;
        }
        Person(char *time)
        {
            cout << total_count() << ". object of Person class was created at: " << time;
        }
};

int main() {

    time_t creation_time;
    struct tm * timeinfo;

    time (&creation_time);
    timeinfo = localtime (&creation_time);

    Person p1(asctime(timeinfo));
    Person p2(asctime(timeinfo));
    Person p3(asctime(timeinfo));
    Person p4(asctime(timeinfo));

    return 0;
}
