#include <stdio.h>

/*
Write a program that prints the numbers from 1 to 100.
But for multiples of three print "Fizz" instead of the number
and for the multiples of five print "Buzz".
For numbers which are multiples of both three and five print "FizzBuzz".
But this time, use switch
*/

int main() {

	int number = 1;

	for (number = 1; number <= 100; number++){
        switch (number%3==0){
        case 1:
            printf("Fizz");
            break;
        }switch (number%5==0){
            case 1:
            printf("Buzz");
            break;
        default:
            printf("%d", number);
            break;
        }   printf("\n");

    }

	return 0;
}
