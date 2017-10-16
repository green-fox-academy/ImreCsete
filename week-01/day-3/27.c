#include <stdio.h>
#include <stdlib.h>

/*
swap the values of the to number
print out first the original values then print out the swapped values
but this time use bitwise operators only
*/

int main()
{
    int x = 32;
    int y = 20;

    printf("The original values are %d, %d.\n", x, y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("The swapped values are %d, %d.\n", x, y);

    return 0;
}
