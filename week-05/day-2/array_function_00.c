#include <stdlib.h>
#include <stdint.h>

/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */

void function_sort(int *array_of_integers, uint16_t array_length);

int main()
{
    int array_of_integers[10];

    for (int i = 0; i < (sizeof(array_of_integers) / sizeof(array_of_integers[0])); i++)
        array_of_integers[i] = rand() % 100;

    for (int i = 0; i < (sizeof(array_of_integers) / sizeof(array_of_integers[0])); i++)
        printf("%d, ", array_of_integers[i]);

    printf("\n");

    function_sort(array_of_integers, (sizeof(array_of_integers) / sizeof(array_of_integers[0])));

    return 0;
}

void function_sort(int *array_of_integers, uint16_t array_length)
{
    for (int j = 0; j < array_length - 1; j++) {
        for (int i = 0; i < array_length - j - 1; i++)
            if (array_of_integers[i] > array_of_integers[i+1]) {
                int temp = array_of_integers[i];
                array_of_integers[i] = array_of_integers[i+1];
                array_of_integers[i+1] = temp;
            }
    }

    for (int i = 0; i < array_length; i++)
        printf("%d, ", array_of_integers[i]);
}
