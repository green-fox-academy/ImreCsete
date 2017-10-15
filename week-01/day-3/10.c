#include <stdio.h>

int main()
{
	int j1 = 10;
	int j2 = 3;

	// tell if j1 is higher than j2 squared and smaller than j2 cubed

	if (j1 > sqrt(j2) && j1 < j2*j2*j2)
        printf("%d is higher than %f and smaller than %d", j1, sqrt(j2), j2*j2*j2);
    else
        printf("%d is not higher than %f and not smaller %d", j1, sqrt(j2), j2*j2*j2);

    return 0;
}
