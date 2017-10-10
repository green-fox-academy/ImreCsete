#include <stdio.h>
#include <string.h>

void func();

int main()
{
    //write a void function which asks for a number with scanf and print it out with printf, then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem - gets works with array

    func();

    return 0;
}

/*void func(){

    int num;

    printf("Insert a number: ");
    scanf("%d", &num);

    printf("%d", num);

}*/

void func(){

    int num[] = {};

    printf("Insert a number: ");
    gets(&num);

    puts(num);

}
