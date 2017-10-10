#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

	//TODO:
    // Print out the two arrays character-by-character

    for (int i = 0; i < sizeof(char_array); i++){
        printf("%c\n", char_array[i]);
        }

    for (int i = 0; i < sizeof(char_array_the_same); i++){
        printf("%c\n", char_array_the_same[i]);
        }
	//TODO:
    // What is the difference between the arrays? char_array_the_same has a string terminator, and its length is 5 instead of 4

    return 0;
}
