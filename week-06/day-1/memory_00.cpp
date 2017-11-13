#include <iostream>
#include <string>

using namespace std;

// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentence using these variables
// free the allocated memory

namespace Variables {
    string *name;
    int *age;
    int *slice_of_pizza_you_can_eat;
}

int main()
{
    Variables::name = new string;

    *Variables::name = "Imre Csete";

    Variables::age = new int;

    *Variables::age = 26;

    Variables::slice_of_pizza_you_can_eat = new int;

    *Variables::slice_of_pizza_you_can_eat = 8;

    cout << "Your name is " << *Variables::name << ", you are " << *Variables::age << " years old and " << *Variables::slice_of_pizza_you_can_eat << " is the maximum slices of pizza you can eat." << endl;

    delete Variables::name, Variables::age, Variables::slice_of_pizza_you_can_eat;

    return 0;
}
