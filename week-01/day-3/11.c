#include <stdio.h>

int main()
{
	int k = 1521;

	// tell if k is dividable by 3 or 5

	if (k % 3 <= 0) {
        printf("%d is dividable by 3", k);
    } else {
        printf("%d is not dividable by 3", k);
    } if (k % 5 <= 0) {
            printf(" and dividable by 5", k);
    } else
            printf(" and not dividable by 5", k);

    return 0;
}
