#include <stdio.h>

int first_word(char *string, char *first);

int main()
{
    //TODO: write a function, which extracts the first word of a given string.
    //return with the word's length

    char str[] = "Extracting the first word.";
    char first[50];

    first_word(str, first);

    printf("The length of %s is %d characters.\n", first, first_word(str, first));

    return 0;
}

 int first_word(char *string, char *first)
 {
    int i;

    for (i = 0; string[i] != ' '; i++)
      first[i] = string[i];

   return i;
 }
