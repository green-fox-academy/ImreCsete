#include <stdio.h>
#include <string.h>

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    const char space[2] = " ";
    char *token;

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function

	gets(string);

	token = strtok(string, space);

	printf("\nHere is the sentence split into words:\n\n");

	while (token != NULL) {
        printf("%s\n", token);

    token = strtok(NULL, space);
	}

    return(0);
}
