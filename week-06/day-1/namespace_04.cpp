#include <iostream>

using namespace std;

#include "mark.cpp"
#include "maria.cpp"

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it

int add_age(int age1, int age2);

int main()
{
    cout << "The ages of " << Mark::name << " and " << Maria::name << " added are " << add_age(Mark::age, Maria::age) << "." << endl;

    return 0;
}

int add_age(int age1, int age2)
{
    int added_age = age1 + age2;

    return added_age;
}
