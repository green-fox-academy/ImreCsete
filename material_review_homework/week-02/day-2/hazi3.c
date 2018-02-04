#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int meatBalls[5];
    /*int meatBalls[4] = {7,9,43,21};*/
    int totalBalls = 0;

    for(i = 0; i < 5; i++){
        printf("How many meatballs did you eat on day %d? \n", i+1);
        scanf(" %d", &meatBalls[i]);
    }

    for(i = 0; i < 5; i++){
        totalBalls +=meatBalls[i];
    }
    int avg = totalBalls / 5;
    printf("\nYou ate %d meatballs total, thats an average of %d per day! \n", totalBalls, avg);
    return 0;
}
