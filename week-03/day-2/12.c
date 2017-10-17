#include <stdio.h>
#include <string.h>

int main ()
{
	char string[55] ="This is a string for testing";
	char *i = "i";
	char *p;

	//TODO: write a program, which lists all position where character 'i' is found

	p = strstr(string, i);

    printf("In the string '%s', character '%s' can be found on the following positions: ", string, i);

    while (p != NULL) {
        p++;
        printf("%d, ", p - string);
        p =	strstr(p, i);
        }

	return 0;
}
