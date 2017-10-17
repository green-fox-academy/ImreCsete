#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f_array[10] = {5.6, 8.73, 0.15, 0.99, 1.5, 6.3589, 10.01, -33.0, 0, 15};
    int i_array[10];

	//TODO: write a program, which copies the values from the given array to an integer array
    //print out the elements of the integer array, with the "%d" format specifier
    //what do you see?

    //strcpy(f_array, i_array);

    //(int)memcpy(f_array, i_array, strlen(f_array) + 1);
    //memcpy(&f_array, &(float)i_array, sizeof(f_array));

    for (int i = 0; i < 10; i++) {
        i_array[i] = f_array[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("%f, ", (float)i_array[i]);
    }

    return 0;
}
