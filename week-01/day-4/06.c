#include <stdio.h>

int main()
{
	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".

	int number = 1;

	for (number = 1; number <= 100; number++) {
        if (number % 3 == 0) {
            printf("Fizz");
        }if (number % 5 == 0) {
            printf("Buzz");
        } if(number % 3 && number % 5) {
            printf("%d", number);
        } printf("\n");
    }

	return 0;
}
