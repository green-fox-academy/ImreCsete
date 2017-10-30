#include <stdlib.h>

/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
 */

 int main()
 {
     int array_of_5[5];

     for (int i = 0; i < 5; i++)
        array_of_5[i] = rand() % 500;

     for (int i = 0; i < 5; i++)
        printf(" %d |", array_of_5[i]);


     for (int i = 0; i < 5 / 2; i++) {
        int temp = array_of_5[4-i];
        array_of_5[4-i] = array_of_5[i];
        array_of_5[i] = temp;
     }

     printf("\n");

     for (int i = 0; i < 5; i++)
     printf(" %d |", array_of_5[i]);

     return 0;
 }
