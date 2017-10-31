#include <stdlib.h>

/*
 * Create 9 arrays of characters, each should contain a word.
 * Let it be this: The Quick brown Dog jumps over the Lazy Fox.
 * Create an array of 9 pointers of character type.
 * Make it so, that each pointer points to one of the words. Meaning to one of the original arrays You just created.
 * So You'll have a pointer pointing to each of these original arrays in an array of pointers.
 * Print them out, each in a new line using this array of pointers.
 * Now make it so, that the Fox is Green and he jumps over the lazy dog.
 * Use the existing arrays to achieve this.
 * Print it out again.
 */

int main()
{
    char array_The[4] = "The";
    char array_Quick[6] = "Quick";
    char array_brown[6] = "brown";
    char array_Dog[4] = "Dog";
    char array_jumps[6] = "jumps";
    char array_over[5] = "over";
    char array_the[4] = "the";
    char array_Lazy[5] = "Lazy";
    char array_Fox[4] = "Fox";

    char *char_array[9];

    char_array[0] = array_The;
    char_array[1] = array_Quick;
    char_array[2] = array_brown;
    char_array[3] = array_Dog;
    char_array[4] = array_jumps;
    char_array[5] = array_over;
    char_array[6] = array_the;
    char_array[7] = array_Lazy;
    char_array[8] = array_Fox;

    for (int i = 0; i < (sizeof(char_array) / sizeof(char_array[0])); i++)
        printf("%s ", char_array[i]);



    return 0;
}
