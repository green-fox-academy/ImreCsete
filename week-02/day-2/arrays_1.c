#include <stdio.h>

int main() {
    char my_name_array[] = "My Name";
    int a = sizeof my_name_array;

	//TODO:
    // Print out the array character-by-character

    for (int i = 0; i < a; i++){
        printf("%c\n", my_name_array[i]);
        }
    return 0;
}
