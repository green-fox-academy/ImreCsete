#include <stdio.h>

/*
 * Create an array of integers. Make it 10 long at least. Fill it up with numbers - random or otherwise - as You wish.
 * Iterate over this array using a pointer. Print out it's elements.
 */

int main()
{
    int array_of_10[10];
    int *int_pointer = array_of_10;

    for (int i = 0; i < (sizeof(array_of_10) / sizeof(array_of_10[0])); i++)
        array_of_10[i] = rand() % 500;

    for (*int_pointer; int_pointer - array_of_10 < (sizeof(array_of_10) / sizeof(array_of_10[0])); int_pointer++)
        printf("%d, ", *int_pointer);

    return 0;
}
