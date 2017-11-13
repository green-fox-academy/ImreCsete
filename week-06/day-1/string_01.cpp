#include <iostream>
#include <iomanip>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    int attendee_hours_daily = 6;
    int semester_weeks = 17;
    int work_hours = 52;
    int coding_hours = attendee_hours_daily * semester_weeks * 5;
    float percentage = (float)coding_hours / ((semester_weeks * work_hours) / 100);

    cout << endl << "An attendee spends " << coding_hours << " hours coding during a semester" << endl;

    cout << endl << "The percentage of hours spent with coding in a semester are " << fixed << setprecision(2) << percentage << "% in average" << endl;

    return 0;
}
