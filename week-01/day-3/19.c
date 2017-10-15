#include <stdio.h>
#include <stdint.h>

int main()
{
	int a = 654;
	int c;
	uint64_t b = 654987312;

	// Tell if the remainder of b divided by a is 3

	c = b % a;

	printf("a= %d\nb= %d\n", a, b);

	if (c == 3)
        printf("Yes, the remainder b divided by a is 3.\n");
    else
        printf("No, the remainder b divided by a is not 3.\n");

	return 0;
}
