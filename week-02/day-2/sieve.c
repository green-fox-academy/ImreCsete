#include <stdio.h>
#include <stdint.h>

int main(){

    int num[100];
    num[1] = 0;

    for(int a = 2; a <= 100; a++){
        num[a] = 1;
    }
    for(int a = 2; (a * a) <= 100; a++){
        if(num[a] == 1){
            for(int b = (a * a); b <= 100; b += a){
                num[b] = 0;
            }
        }
    }
    for(int a = 0; a <= 100; a++){
        if(num[a] == 1){
            printf("%d, ", a);
        }
    }
    return 0;
}
