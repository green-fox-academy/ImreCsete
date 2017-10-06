#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{


    int from = 179;
    int to = 371;
    int howMany = 0;

    if (from%2 == 0)
         from = from + 1;
    for (from; from < to; from+=2){
        printf("%d, ", from);
            howMany++;
        }printf("this is %d odd numbers between %d and %d", howMany, (from - howMany*2), to);

	return 0;
}
