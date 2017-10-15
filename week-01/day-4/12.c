#include <stdio.h>
#include <stdlib.h>

/*
create a program which prints out the days from monday to sunday
use a loop and variables to do that
for example:
for(int i = 0; i < 6; i++){
    printf("%d\n", i);
}
you can match the numbers with the name of the days
write this program first with if and else-if statements
then do it again with switch-statement
take the conclusion:
    - which method was faster? - if
    - which was shorter? - if
    - which one did you find easier? - if
*/

int main()
{
    int day = 0;

    for(day = 0; day < 6; day++) {
  /*      if(day = 1);
            printf("Monday\n");
        if(day = 2);
            printf("Tuesday\n");
        if(day = 3);
            printf("Wednesday\n");
        if(day = 4);
            printf("Thursday\n");
        if(day = 5);
            printf("Friday\n");
        if(day = 6);
            printf("Saturday\n");
        if(day = 7);
            printf("Sunday\n");
    }
    return 0;
} */

         switch(day <= 7){
            case 1:
                printf("Monday\n");
            case 2:
                printf("Tuesday\n");
            case 3:
                printf("Wednesday\n");
            case 4:
                printf("Thursday\n");
            case 5:
                printf("Friday\n");
            case 6:
                printf("Saturday\n");
            case 7:
                printf("Sunday\n");
        }
            break;
    }
    return 0;
}
