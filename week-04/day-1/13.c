#include <stdio.h>

int my_strlen(char *string);

int main()
{
	char my_string[50] = "Hello world!";

	//TODO: implement your own strlen function.

	my_strlen(my_string);

	return 0;
}

int my_strlen(char *string)
{
    int length;

    for (length = 0; string[length] != '\0'; length++);

    printf("%d\n", length);
}
