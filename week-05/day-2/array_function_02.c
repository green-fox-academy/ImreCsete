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
    int index_number = 0;

    char array_destination[] = "RandomNumberGenerator";
    char array_source[] = "IsAwesome";

    printf("The first character array before replace_function is called: \n\n\t");

    for (int i = 0; i < strlen(array_destination); i++)
        printf("%c", array_destination[i]);

    printf("\n\nThe second character array before replace_function is called: \n\n\t");

    for (int i = 0; i < strlen(array_source); i++)
        printf("%c", array_source[i]);

    printf("\n\nPlease give the index number for the replace_function: ");
    scanf("%d", &index_number);

    if (replace_function(array_destination, array_source, index_number) == -1)
        printf("\nIndex [%d] is out of bounds. The length of the first array is %d\n", index_number, strlen(array_destination));

    if (replace_function(array_destination, array_source, index_number) == 0) {
        printf("\n\nThe replace_function was successful!\n\nThe first array after replace_function was called: \n\n\t");

        for (int i = 0; i < strlen(array_destination); i++)
            printf("%c", array_destination[i]);

            printf("\n");
    }

   if (replace_function(array_destination, array_source, index_number) == 1)
        printf("\nThe replace_function can't be initialized. The length of the second array is %d, which is too long to be copied.\n", strlen(array_source));

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

    for (int i = 0; i < strlen(array2); i++) {
        array1[i + number] = array2[i];
    }

    return 0;
}
