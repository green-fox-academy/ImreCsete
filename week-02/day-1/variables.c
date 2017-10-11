#include <stdio.h>
#include <math.h>

/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on a given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/

int duplication();
int second_power();
int factorial();
int sum(int num);
float root();

int num;

int main()
{
    int counter = 0;

    printf("Please insert a number between 1 and 9: ");
    scanf("%d", &num);
    if (num <= 0 || num >= 10){
        printf("Invalid number.\n");
    } else {
    printf("\n%d doubled is %d.\n", num, duplication());
        ++counter;
    printf("%d on the 2nd power is %d.\n", num, second_power());
        ++counter;
    printf("The factorial of %d is %d.\n", num, factorial());
        ++counter;
    printf("The sum of all numbers up to %d is %d.\n", num, sum(num));
        ++counter;
    printf("The square root of %d is %f\n", num, root());
        ++counter;
    }
    printf("\n%d operations have been done on the entered number.\n", counter);
        return 0;
}

int duplication()
{
    int double_value = num * 2;

    return double_value;
}

int second_power()
{
    int power = num * num;

    return power;
}

int factorial()
{
    int factorial = 1;

    for(int a = 1; a <= num; a++)
        factorial = factorial * a;

    return factorial;
}

int sum(int num)
{
    if(num != 0)
        return num + sum(num-1);
    else
        return num;
}

float root()
{
    float root = sqrt(num);

    return root;
}
