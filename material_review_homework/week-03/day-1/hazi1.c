#include <stdio.h>
#include <stdint.h>

int summation(int a, int b){

    return a + b;
}

int subtraction(int a, int b){

    return a - b;
}

int multiplication(int a, int b){

    return a * b;
}

int division(int a, int b){

    return a / b;
}

int main()
{
    int choice = 0;
    int num_1 = 0;
    int num_2 = 0;

    int num_1_watcher = 0;
    int num_2_watcher = 0;

    printf("Hello this is a calculator!\n");
    printf("Please add two numbers (hit enter between them):\n");
    scanf("%d %d", &num_1, &num_2);

    num_1_watcher = &num_1;
    num_2_watcher = &num_2;

	printf("Please choose from the following options:\n\n");
	printf("\tPress 1 for summation.\n");
	printf("\tPress 2 for subtraction.\n");
	printf("\tPress 3 for multiplication.\n");
	printf("\tPress 4 for division.\n");
	printf("\tPress 9 to exit the program.\n");

    while(choice != 9){
        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("%d + %d = %d\n",num_1, num_2, summation(num_1, num_2));
            continue;
        case 2:
            printf("%d - %d = %d\n",num_1, num_2, subtraction(num_1, num_2));
            continue;
        case 3:
            printf("%d * %d = %d\n",num_1, num_2, multiplication(num_1, num_2));
            continue;
        case 4:
            printf("%d / %d = %d\n",num_1, num_2, division(num_1, num_2));
            continue;
        case 9:
            printf("Program is over.\n");
            continue;
        default:
            printf("Wrong user input.\n");
            continue;
        }
    }

    return 0;
}
