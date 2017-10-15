#include <stdio.h>
#include <stdlib.h>

/*
create a program which generates numbers from 0 to 100
for each number write if the number is odd or even (don't print out the numbers)
*/

int main()
{
    int number = 0;

	for (number = 0; number <= 100; number++) {
        if (number % 2){
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
	}

    return 0;
}
