#include <stdio.h>
#include <string.h>

//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use

unsigned int unsigned_function();

int main()
{
    int a = 229;
    a = unsigned_function();


    printf("%d", a);

    return 0;
}

unsigned int unsigned_function()
{
    return 485;
}
