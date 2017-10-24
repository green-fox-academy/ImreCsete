#include <stdio.h>

int main()
{
    int numbers[] = {5, 6, 7, 8, 9};
    int *number_pointer = &numbers[0];

    //TODO:
    // The "number_pointer" should point to the first element of the array called "numbers",
    // then please print its value with it.

    printf("%d\n", *number_pointer);

    return 0;
}
