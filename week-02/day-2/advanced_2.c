#include <stdio.h>
#include <limits.h>

int main()
{
	int number_array[8] = {48, 59, 2, -8, 55, 56, 78, 12};
	int i;
	int largest1;
	int largest2;

	//TODO:
	// Write a C program to find the two largest element in an array using only 1 for loop
	// From <limits.h> use INT_MIN: this is the least integer

	largest1 = largest2 = INT_MIN;

	for (i = 0; i < 7; i++){
        if (number_array[i] > largest1)
            largest2 = largest1;
            largest1 = number_array[i];

        if (number_array[i] > largest2 && number_array[i] < largest1)
            largest2 = number_array[i];
	}
	printf("The first largest element is %d and the second largest element is %d.\n", largest1, largest2);
	return 0;
}
