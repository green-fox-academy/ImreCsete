#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    float grade = 0;
    float scoreEntered = 0;
    float NumberOfTests = 0;
    float average = 0;

    printf("Press 0 when complete. \n\n");

    do{
        printf("Tests:%.0f  Average:%.f  \n", NumberOfTests, average);
        printf("\nEnter test score: ");
        scanf("%f", &scoreEntered);
        grade += scoreEntered;
        NumberOfTests++;
        average = grade / NumberOfTests;
    }while(scoreEntered != 0);

    return 0;
}
