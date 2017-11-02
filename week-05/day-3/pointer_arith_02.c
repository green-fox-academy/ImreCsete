#include <stdio.h>
#include <time.h>

/*
 * Create an array of integers. Make it 16 long. Fill it up with numbers as You wish. Print them out.
 *     * Iterate over it with a pointer so, that You only get to each _second_ element. Print out only these.
 *     * Iterate over it only touching each _fourth_ element. Print out only these.
 *     * Iterate over it only touching each _eighth_ element. Print out only these.
 */

int main()
{
    int array_of_16[16];
    int *int_pointer = array_of_16;
    time_t t;

    srand((unsigned) time(&t));

    for (int i = 0; i < (sizeof(array_of_16) / sizeof(array_of_16[0])); i++)
        array_of_16[i] = rand() % 500;

    printf("Printing out every element.\n\n\t");

    for (int i = 0; i < (sizeof(array_of_16) / sizeof(array_of_16[0])); i++)
        printf("%d, ", *(int_pointer + i));

    printf("\n\nPrinting out every second element.\n\n\t");

    for (int i = 1; i < (sizeof(array_of_16) / sizeof(array_of_16[0])); i+=2)
        printf("%d, ", *(int_pointer + i));

    printf("\n\nPrinting out every forth element.\n\n\t");

    for (int i = 3; i < (sizeof(array_of_16) / sizeof(array_of_16[0])); i+=4)
        printf("%d, ", *(int_pointer + i));

    printf("\n\nPrinting out every eight element.\n\n\t");

    for (int i = 7; i < (sizeof(array_of_16) / sizeof(array_of_16[0])); i+=8)
        printf("%d, ", *(int_pointer + i));

    printf("\n");

    return 0;
}
