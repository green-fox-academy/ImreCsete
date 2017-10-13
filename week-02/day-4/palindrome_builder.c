#include <stdio.h>
#include <string.h>

//Create a function named create palindrome following your current language's style guide.
//It should take a string, create a palindrome from it and then return it.

void create_palindrome();

int main()
{
    create_palindrome();

    return 0;
}


void create_palindrome()
{
    char characters[100];

    printf("Please enter some characters that will be returned as a palindrome: ");
    gets(characters);

    printf("%s", characters);
    printf("%s", strrev(characters));
}

