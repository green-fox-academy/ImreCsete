#include <stdlib.h>
#include <stdio.h>

/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */

 int main()
 {
    int array_of_5[5];
    int array_of_7[7] = {42, 0, 0, 0, 0, 0, 42};

    for (int i = 0; i < (sizeof(array_of_5) / sizeof(array_of_5[0])); i++)
        array_of_5[i] = rand() % 500;

    for (int i = 0; i < (sizeof(array_of_5) / sizeof(array_of_5[0])); i++)
        array_of_7[i+1] = array_of_5[i];

    for (int i = 0; i < (sizeof(array_of_7) / sizeof(array_of_7[0])); i++)
        printf("%d, ", array_of_7[i]);

    return 0;
 }
