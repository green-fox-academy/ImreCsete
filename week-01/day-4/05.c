#include <stdio.h>

int main()
{
	// print the even numbers till 20

	int number = 0;

    for (number = 0; number <= 20; number += 2) {
        printf("%d \n", number);
    }

	return 0;
}
