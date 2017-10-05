#include <stdio.h>
#include <stdlib.h>

/*
create a simple program which checks if the num is odd or even
*/

int main()
{
    int num;
    num = 13;

    switch(num%2){
        case 0:
            printf("%d is even", num);
            break;
        case 1:
            printf("%d is odd", num);
            break;
    }



    return 0;
}
