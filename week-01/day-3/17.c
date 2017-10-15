#include <stdio.h>

int main()
{
	int w = 24;
	int out = 0;

	printf("If %d is even, %d is incremented by one.\n", w, out);

	// if w is even increment out by one

	if (w % 2 == 0)
       out += 1;

    printf("out is %d.\n", out);

	return 0;
}
