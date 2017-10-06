#include <stdio.h>
#include <stdlib.h>

//create a program to print ASCII values of all characters.
/*your output should be something like this:
ASCII value of character 8 = 56
ASCII value of character 9 = 57
ASCII value of character : = 58
ASCII value of character ; = 59
ASCII value of character < = 60
ASCII value of character = = 61
ASCII value of character > = 62
ASCII value of character ? = 63
ASCII value of character @ = 64
ASCII value of character A = 65
ASCII value of character B = 66
*/


int main()
{
    int a = 0;
    /*char a;
    char A;

    for (A = 'A'; A <= 'Z'; ++A)        - only letters of the alphabet
        printf("ASCII value of character %c = %d\n", A, A);
    for (a = 'a'; a <= 'z'; ++a)
        printf("ASCII value of character %c = %d\n", a, a); */

    for (a = 0; a <= 255; a++)
        printf("ASCII value of character %c = %d\n", a, a);

	return 0;
}
