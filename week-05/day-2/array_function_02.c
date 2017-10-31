#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
 * Create a function that takes two arrays of characters and a number.
 * It should replace the contents of the first array from the given index
 * with the contents of the second array.
 * The function should return a number which tells whether it was successful:
 *    * If all is right it should return 0.
 *    * If the index is out of bounds it should return -1.
 *    * If the inserted content would be longer than the receiving array it should return 1 and leave the array as it is.
 * IMPORTANT: Think about what kind of arguments You need to make this happen and craft the function accordingly.
 *
 * Write code in the main function to test all scenarios and write out the result You need to check whether this works.
 */

char replace_function(char *array1, char *array2, int number);

int main()
{
    time_t t;
    int index_number = 0;

    srand((unsigned) time(&t));

    char array_destination[25] = "RandomNumberGenerator";
    char array_source[10] = "IsAwesome";

  /*  for (int i = 0; i < (sizeof(array_destination) / sizeof(array_destination[0])); i++)
        array_destination[i] = (rand() % ('Z' + 1 - 'A') + 'A');

    for (int i = 0; i < (sizeof(array_source) / sizeof(array_source[0])); i++)
        array_source[i] = (rand() % ('Z' + 1 - 'A') + 'A'); */

    printf("The first character array before replace_function is called: \n\n\t");

    for (int i = 0; i < (sizeof(array_destination) / sizeof(array_destination[0])); i++)
        printf("%c", array_destination[i]);

    printf("\n\nThe second character array before replace_function is called: \n\n\t");

    for (int i = 0; i < (sizeof(array_source) / sizeof(array_source[0])); i++)
        printf("%c", array_source[i]);

    printf("\n\nPlease give the index number for the replace_function: ");
    scanf("%d", &index_number);/*

    if (replace_function(array_destination, array_source, index_number) == -1)
        printf("\nIndex [%d] is out of bounds. The length of array_destination is %d", index_number, strlen(array_destination));

    //printf("\n%d", replace_function(array_destination, array_source, index_number)); */

    return 0;
}

char replace_function(char *array1, char *array2, int number)
{
    if (number > strlen(array1)) {
        return -1;
    }

    if (strlen(array2) > strlen(array1)) {
        return 1;
    }

    for (int i = 0; i < strlen(array1); i++)
        array1[i + number] = array2[i];

    for (int i = 0; i < strlen(array1); i++)
        printf("%c", array1[i]);
    return 0;
}
