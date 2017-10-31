#include <stdlib.h>
#include <stdint.h>

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
int function_search(int *unsorted_array, uint16_t array_length, int guess);

int main()
{
    int unsorted_array[50];
    int *pointer_sort;
    int guess;

        for (int i = 0; i < (sizeof(unsorted_array) / sizeof(unsorted_array[0])); i++)
            unsorted_array[i] = rand() % 1000;

            printf("The original contents of the unsorted array:\n");
        for (int i = 0; i < (sizeof(unsorted_array) / sizeof(unsorted_array[0])); i++)
            printf("%d, ", unsorted_array[i]);

        printf("\nThe contents of the array after calling the sort function:\n");

        pointer_sort = function_sort(unsorted_array, (sizeof(unsorted_array) / sizeof(unsorted_array[0])));

        for (int i = 0; i < 50; i++)
            printf("%d, ", *(pointer_sort + i));

        printf("\nPlease insert a number to be checked with the array: ");
        scanf("%d", &guess);

        if (function_search(pointer_sort, (sizeof(unsorted_array) / sizeof(unsorted_array[0])), guess) == 0)
            printf("\n%d is part of the array.\n", guess);

        if (function_search(pointer_sort, (sizeof(unsorted_array) / sizeof(unsorted_array[0])), guess) == -1)
            printf("\n%d is not part of the array.\n", guess);

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

    for (int i = 0; i < (array_length); i++)
        sorted_array[i] = unsorted_array[i];

    return sorted_array;
}

int function_search(int *unsorted_array, uint16_t array_length, int guess)
{
    for (int i = 0; i < array_length; i++) {
        if (unsorted_array[i] == guess)
        return 0;
    }
    return -1;
}
