#include <stdio.h>
#include <stdlib.h>
#include "Info.h"

int main()
{
    struct user bucky;
    struct user emily;

    bucky.userID = 1;
    emily.userID = 2;

    puts("Enter the first name of user 1:");
    gets(bucky.firstName);
    puts("Enter the first name of user 2:");
    gets(emily.firstName);

    printf("User 1 id is %d\n", bucky.userID);
    printf("User 2 first name is is %s\n", emily.firstName);

    return 0;
}
