#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[] = "cica";
    char array2[] = {'c', 'i', 'c', 'a', '\0'};

    printf("%c\n", array[1]);

    printf("%s\n", array);

    /*scanf("%s", array);
    printf("%s", array);*/
    printf("%d", sizeof(array));

    int array3 [4][4] = {
        (1,2,3,4),
        (6,7,8,9)
    };

    for (int n = 0; n <= 4; n++){
        for (int i = 0; i <= 4; i++){
            printf("%d", array3[n][i]);

        }
    }

    return 0;
}
