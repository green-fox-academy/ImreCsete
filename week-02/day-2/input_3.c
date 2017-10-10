#include <stdio.h>
int main()
{
    char char_to_ascii;

    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one character and prints out the character in character format then in ASCII too

    printf("Type in one character then press enter: ");
    scanf("%c", &char_to_ascii);

    printf("The character %c is %c = %d in ASCII format.", char_to_ascii, char_to_ascii, char_to_ascii);

    return 0;
}
