#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input

    //TODO:
    // Get the user's name with gets

    printf("Enter your name:\n");
        gets(buffer);

    //TODO:
    // Print it out with puts

    printf("Your name is: ");
        puts(buffer);

    //TODO:
    // Get the user's pet name with gets

    printf("Enter your pet's name:\n");
        gets(buffer);

    //TODO:
    // Print it out

    printf("Your pet's name is: ");
        puts(buffer);

    return 0;
}
