#include <stdio.h>
#include <stdlib.h>
#include "memoization.h"

// create a function which returns a Fibonacci number like in the example code
// this time do it with memoization
// again the parameters value should be stored in a .h file

int fibonacci(int number);

int main()
{
    printf("%d", fibonacci(12));
    return 0;
}

int fibonacci(int number)
{
    /*if (number == 1) - this is the example code, without memoization
        return 1;
    else if (number == 2)
        return 1;
    else
        return fibonacci(number - 1) + fibonacci(number - 2);*/


    if (number == 0)
        return a;
    for (i = 2; i <= number; i++){
        c = a + b;
        a = b;
        b = c;
        }
  return b;
}
