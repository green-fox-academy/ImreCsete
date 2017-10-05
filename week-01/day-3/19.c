#include <stdio.h>
#include <stdint.h>

int main() {
	int a = 654;
	uint64_t b = 654987312;
	int c = a / b;
	// Tell if the remainder of b divided by a is 3
	if (c = 3){
        pritnf("yes it is 3");
    } else
        printf("no, it is not 3");
	return 0;
}
