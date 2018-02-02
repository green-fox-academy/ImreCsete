#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TODO: Create a function that takes an array of integers and returns the average of the even numbers from that array

float arr_even_avg(int array[], int size);

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

    printf("\n\n");

    arr_even_avg(arr, 10);

    //printf("\nThe avg of even numbers are: %f\n", arr_even_avg(&arr));
}

float arr_even_avg(int array[], int size)
{
    int even_arr[size];
    int j = 0;
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            even_arr[j] = array[i];
            sum += even_arr[j];
            j++;
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d, ", even_arr[i]);
    }
    //return avg = (sum / (sizeof(even_arr)/sizeof(even_arr[0])));
}
