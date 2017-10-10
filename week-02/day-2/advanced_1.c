#include <stdio.h>

int main()
{
    int arr[50];
    int size;
    int position;
    int i;

    // TODO: write a program which asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting

    printf("Enter the size of the array (between 1 and 50): ");
    scanf("%d", &size);

    if (size >= 0 && size >= 50){
        printf("Invalid number");

    } else {
        for (i = 0 ; i < size ; i++) {
        printf("%d, ", arr[i] = rand() % 100);
    }

    printf("\nEnter the position where you want the element to be deleted: ");
        scanf("%d", &position);

    if (position >= size + 1) {
        printf("Invalid position.\n");

    } else {
        for (i = position - 1 ; i < size - 1 ; i++)
        arr[i] = arr[i+1];

    printf("Array after deleting is:\n");

        for(i = 0 ; i < size - 1 ; i++)
        printf("%d, ", arr[i]);
        }
    }
    return 0;
}
