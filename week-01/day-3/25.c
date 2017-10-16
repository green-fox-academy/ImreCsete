#include <stdio.h>
#include <stdlib.h>

/*
write a program to find the largest number of three
*/

int main()
{
    int a = 13;
    int b = 29;
    int c = 7;

    if (a > b && a > c)
        printf("%d is the largest number out of %d, %d and %d.\n", a, a, b, c);

    if (b > a && b > c)
        printf("%d is the largest number out of %d, %d and %d.\n", b, a, b, c);

    if (c > a && c > b)
        printf("%d is the largest number out of %d, %d and %d.\n", c, a, b, c);

    return 0;
}
