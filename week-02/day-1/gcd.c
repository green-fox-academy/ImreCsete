#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

// create a function to find the greatest common divisor of two numbers (a and b)
// again the parameters value should be stored in a .h file
// use recursion

int recursive_gcd(int a, int b);

int main()
{
    printf("The greatest common divisor of %d and %d is %d.", a, b, recursive_gcd(a,b));

    return 0;
}


int recursive_gcd(int a, int b)
{
    if (b != 0){
       return recursive_gcd(b, a % b);
    } else
       return a;
}
