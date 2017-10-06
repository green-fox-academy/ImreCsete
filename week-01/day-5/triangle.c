#include <stdio.h>

/*create a simple program which generates a triangle like this:
1
22
333
4444
55555
666666
7777777
if you change the rows variable the output should be different as well
*/
int main()
{
    int rows = 7;
    int a;
    int b;

    for (a = 1; a <= rows; ++a){
        for (b = 1; b <= a; ++b){
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}
