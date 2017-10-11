#include <stdio.h>
#include <stdlib.h>

// create a function to calculate factorial of a number using recursion

int factorio();

int number = 7;

int main()
{
    printf("The factorial of %d is %d", number, factorio());
    return 0;
}

int factorio()
{
    int factorial = 1;

    for(int a = 1; a <= number; a++)
        factorial = factorial * a;

    return factorial;
}
