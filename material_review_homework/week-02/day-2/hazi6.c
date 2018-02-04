#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char catsName[50];
    char catsFood[20];
    char sentence[75] = "";

    puts("What is the cat's name? ");
    gets(catsName);

    puts("What does he eat? ");
    gets(catsFood);

    strcat(sentence, catsName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catsFood);

    puts(sentence);

    return 0;
}

