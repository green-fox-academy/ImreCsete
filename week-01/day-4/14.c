#include <stdio.h>

/*
modify the previous program to print the table reverse order
for example:
Fahrenheit       Celsius
300               148.9
280               137.8
260               126.7
240               115.6
...
print out at least 10 lines
*/

int main() {

    float f;

    f = 0;
        printf("Farenheit\tCelsius\n");
    for(f = 300; f >= 0; f-=20){
        printf("%.0f\t\t%.2f\n", f, (f-32) / 1.8);
    }
	return 0;
}
