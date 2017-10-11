#include <stdio.h>
#include <stdlib.h>
#include "factorio.h"

// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//

int factorio_without(int input);
int factorio_with(int input);

int main()
{
    printf("The factorial of %d is %d, without recursion.\n", input, factorio_without(input));
    printf("The factorial of %d is %d, with recursion.\n", input, factorio_with(input));

    return 0;
}

int factorio_without(int input)
{
    int a;
    int factorial = 1;

    for(a = 1; a <= input; a++)
        factorial = factorial * a;

    return factorial;
}

int factorio_with(int input)
{
    int a;
    int factorial = 1;
    if(input != 0)
        factorial = factorial * a;
    else
        return factorial;
}
