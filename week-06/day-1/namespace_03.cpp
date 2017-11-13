#include <iostream>
#include <ctime>

using namespace std;

#include "person.cpp"

// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born

int year_born(int age);

int main()
{
    cout << "You were born in the year " << year_born(26) << "." << endl;

    return 0;
}

int year_born(int age)
{
	time_t date = time(NULL);
	tm *date_pointer = localtime(&date);

    int birth_date = (date_pointer -> tm_year + 1900) - age;

    return birth_date;
}
