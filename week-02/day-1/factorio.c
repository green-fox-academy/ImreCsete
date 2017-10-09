#include <stdio.h>
#include <stdlib.h>
#include "factorio.h"

// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//

int factorio(int input);

int main()
{
    printf("The factorial of %d is %d, without recursion.\n", input, factorio(input));
    return 0;
}

int factorio(int inpunt)
{
    int a;
    int factorial = 1;

    for(a = 1; a <= input; a++)
        factorial = factorial * a;

    return factorial;
}
