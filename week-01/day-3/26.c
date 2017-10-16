#include <stdio.h>
#include <stdlib.h>

/*
swap the values of the two number
print out first the original values then print out the swapped values
*/

int main()
{
    int x = 32;
    int y = 20;
    int swap = 0;

    printf("The original values are %d, %d.\n", x, y);

    swap = x;
    x = y;
    y = swap;

    printf("The swapped values are %d, %d.\n", x, y);

    return 0;
}
