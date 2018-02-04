#include <stdio.h>
#include <stdlib.h>

static int x;

static
void print_num(void){
    static int y = 0;
    printf("%d\n", y);
    y = y + 1;
}

int main(void) {
    print_num();
    print_num();
    print_num();

    return 0;
}
