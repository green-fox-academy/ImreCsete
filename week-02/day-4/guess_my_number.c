#include <stdio.h>
#include <stdlib.h>

// Write a program where the program chooses a number between 1 and 100. The player is then asked to enter a guess.
// If the player guesses wrong, then the program gives feedback and ask to enter an other guess until the guess is correct.

int main ()
{
    int guess;
    int number = rand() % 100 + 1;
    int number_of_tries = 0;

    printf("The program choose a number from 1 to 100. You have to guess it!\n");

    do{
        printf ("\nPlease, enter a number between 1 and 100: ");
        scanf ("%d", &guess);
        ++number_of_tries;

    if (guess == number){
        printf ("You guessed correctly!");
        break;
        } else if (guess <= 0 || guess > 100){
            printf("\nInvalid number! Still counts as a guess, be more careful! You have %d guesses left!\n", 10 - number_of_tries);
        } else if (guess > number){
            printf ("\nYour guess was too high. You have %d guesses left!\n", 10 - number_of_tries);
        } else if (guess < number){
            printf ("\nYour guess was too low. You have %d guesses left!\n", 10 - number_of_tries);
        }
        } while (number_of_tries < 10);
    return 0;
}
