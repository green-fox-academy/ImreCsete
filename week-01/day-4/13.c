#include <stdio.h>

/*
create a program which converts the Fahrenheit to Celsius
the output should look like this:
Fahrenheit       Celsius
  0               -17.8
 20                -6.7
 40                 4.4
 60                15.6
...
print out at least 10 lines
*/

int main()
{
    float f;

    f = 0;
        printf("Fahrenheit\tCelsius\n");
    for(f = 0; f <= 180; f += 20){
        printf("%.0f\t\t%.2f\n", f, ((f - 32) / 1.8));
    }

	return 0;
}
