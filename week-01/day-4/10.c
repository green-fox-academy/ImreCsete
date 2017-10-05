#include <stdio.h>
#include <stdlib.h>

/*
write a simple program which can help you decide is it hot enough to turn on the AC or not
for example if temperature 20 or less the output is :
it is too cold for the AC
or, the temperature is between 21-24:
it is up to you to turn on the AC
...
*/

int main()
{
    int temperature;
    temperature = 23;

    switch(temperature <= 20 && temperature <= 24){
    case 0:
        printf("It is up to you to turn up the AC\n");
        break;
    case 1:
        printf("It is too cold for the AC\n");
        break;
    }
    return 0;
}
