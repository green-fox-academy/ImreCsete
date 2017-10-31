#include <stdlib.h>

/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */

int main()
{
    int array_of_12[12];

    for (int i = 0; i < (sizeof(array_of_12) / sizeof(array_of_12[0])); i++)
        array_of_12[i] = rand() % 5000;

    printf("The elements of array are: ");

    for (int i = 0; i < (sizeof(array_of_12) / sizeof(array_of_12[0])); i++)
        printf("%d, ", array_of_12[i]);

    for (int i = 0; i < (sizeof(array_of_12) / sizeof(array_of_12[0])); i++) {
        for (int i = 0; i < (sizeof(array_of_12) / sizeof(array_of_12[0])); i++)
            if (array_of_12[i] > array_of_12[i+1]) {
                int temp = array_of_12[i];
                array_of_12[i] = array_of_12[i+1];
                array_of_12[i+1] = temp;
            }
    }

    printf("\nThe elements of array after sorting are: ");

    for (int i = 0; i < (sizeof(array_of_12) / sizeof(array_of_12[0])); i++)
        printf("%d, ", array_of_12[i]);

    return 0;
}
