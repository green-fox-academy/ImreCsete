#include <stdlib.h>
#include <stdint.h>
#include <string.h>

/*
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unsorted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */

int *function_sort(int *unsorted_array, uint16_t array_length);

int main()
{
    int unsorted_array[50];
    int *pointer_sort;

        for (int i = 0; i < (sizeof(unsorted_array) / sizeof(unsorted_array[0])); i++)
            unsorted_array[i] = rand() % 1000;

            printf("The original contents of the unsorted array:\n");
        for (int i = 0; i < (sizeof(unsorted_array) / sizeof(unsorted_array[0])); i++)
            printf("%d, ", unsorted_array[i]);

        printf("\nThe contents of the array after calling the sort function:\n");

        pointer_sort = function_sort(unsorted_array, (sizeof(unsorted_array) / sizeof(unsorted_array[0])));

        for (int i = 0; i < 50; i++)
            printf("%d, ", *(pointer_sort + i));

        return 0;
}

int *function_sort(int *unsorted_array, uint16_t array_length)
{
    static int sorted_array[50];

    for (int j = 0; j < array_length - 1; j++) {
        for (int i = 0; i < array_length - j - 1; i++)
            if (unsorted_array[i] > unsorted_array[i+1]) {
                int temp = unsorted_array[i];
                unsorted_array[i] = unsorted_array[i+1];
                unsorted_array[i+1] = temp;
            }
    }

  //  memcpy(sorted_array, unsorted_array, (array_length);

    for (int i = 0; i < (array_length); i++)
        sorted_array[i] = unsorted_array[i];

    return sorted_array;
}
