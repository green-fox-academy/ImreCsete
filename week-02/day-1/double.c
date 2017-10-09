#include <stdio.h>
#include <stdlib.h>
#include "double.h"

// create a function called `doubling` that doubles it's input parameter
// again the parameters value should be stored in a .h file

int doubling(int double_value);

int main()
{
    printf("%d\n", doubling(input));

    return 0;
}

int doubling(int double_value){
    int doubles = double_value * 2;

    return doubles;
}
