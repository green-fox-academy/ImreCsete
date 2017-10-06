#include <stdio.h>
#include <stdlib.h>

//writing ABC with loop like this : aAbBcC...zZ

int main()
{

    char a;
    char A;

    for (a = 'a', A = 'A'; a <= 'z', A <= 'Z'; ++a, ++A)
        printf("%c%c", a, A);

	return 0;
}
