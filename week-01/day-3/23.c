/* Write a program that has two int variables girls_number, and boys_number
The first number represents the number of girls that comes to a party, the
second the boys.
It should print "The party is excellent!" if the the number of girls and
boys are equal and there are more people coming than 20
It should print "Quite cool party!"
if there are more than 20 people coming but the girl - boy ratio is not 1-1
It should print: "Average party..."
if there are less people coming than 20
It should print: "Sausage party"
if no girls are coming, regardless the count of the people
Run your program at least 3-4 times, change the variables to see the different outputs
*/

#include <stdio.h>
#include <stdint.h>

int main() {

	int girls_number = 0;
	int boys_number = 0;

	if ((girls_number == boys_number) && (girls_number + boys_number) > 20){
        printf("The party is excellent!\n");
    }if ((girls_number < boys_number) && (girls_number + boys_number) > 20){
        printf("Quite a cool party!\n");
    }if ((girls_number + boys_number) < 20 && (girls_number + boys_number) > 0){
        printf("Average party...\n");
    }if (boys_number > 1 && girls_number == 0)
        printf("Sausage party\n");

	return 0;
}
