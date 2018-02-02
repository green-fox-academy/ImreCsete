#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TODO: Create a function that takes an array of integers and returns the average of the even numbers from that array

float arr_even_avg(int array);

int main()
{
    srand((int)time(NULL));
    int arr[10];

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        arr[i] = rand() % 500 + 1;
    }

    printf("The elements of the array are: ");

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");
}

float arr_even_avg(int array)
{

}
