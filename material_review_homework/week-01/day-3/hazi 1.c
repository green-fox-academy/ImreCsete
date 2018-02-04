#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char grade = 'C';

    switch(grade){
        case 'A' : printf("Sweet! \n");
                    break;
        case 'B' : printf("Could have been better \n");
                    break;
        case 'C' : printf("I see you didn't study! \n");
                    break;
        case 'D' : printf("Puns lol! \n");
                    break;
        case 'F' : printf("You Fail! \n");
                    break;
        default : printf("There is no such thing \n");
    }

    return 0;
}
