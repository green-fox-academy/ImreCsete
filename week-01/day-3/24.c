#include <stdio.h>
#include <stdlib.h>

/*
Create a program which converts days to years, months, weeks and days
to keep it simple we say every year is 365 days long, every month is 30 days
*/

int main()
{
    int days = 3243;
    int years = days / 365;
    int weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("%d years, %d weeks and %d days long.\n", years, weeks, days);

    return 0;
}
