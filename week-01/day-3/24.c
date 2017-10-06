#include <stdio.h>
#include <stdlib.h>

/*
Create a program which converts days to years, months, weeks and days
to keep it simple we say every year is 365 days long, every month is 30 days
*/

int main()
{
    int days = 3243;
    float years = days / 365;
    float months = days / 30;
    float weeks = days / 7;

    printf("%d days are:\n%.0f years long or;\n%.0f months long or;\n%.0f weeks long.\n", days, years, months, weeks);

    return 0;
}
