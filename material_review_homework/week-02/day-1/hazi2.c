#include <stdio.h>
#include <stdlib.h>

void printSomething();
int warts = 23;

int main()
{
    printf("I have %d warts\n", warts);
    printSomething();

    return 0;
}

void printSomething(){
    printf("I have %d warts\n", warts);
    return;
}
