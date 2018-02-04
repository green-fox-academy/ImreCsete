#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[11] = "Csete Imre";
    printf("My name is %s \n", name);

    name[2] = 'z';
    printf("My name is %s \n", name);

    char food[] = "tuna";
    printf("Best food is %s \n", food);

    strcpy(food, "bacon");
    printf("Best food is %s \n", food);

    return 0;
}
