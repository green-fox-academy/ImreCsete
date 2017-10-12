#include <stdio.h>
#include <stdlib.h>

// create a function which returns the power of a base number

int power_function(int base, int power);

int main()
{
    int base = 2;
    int power = 7;

    printf("%d on the power of %d equals to %d.\n", base, power, power_function(base, power));

    return 0;
}

int power_function(int base, int power)
{
    if (power != 0)
        return (base * power_function(base, power-1));
    else
        return 1;
}
