#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file

int sum(int LIMIT);

int main()
{
    printf("%d", sum(LIMIT));
    return 0;
}

int sum(int LIMIT)
{
    if(LIMIT != 0)
        return LIMIT + sum(LIMIT-1);
    else
        return LIMIT;
}
