#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
    char movie1[] = "The return of Buckyman";
    char * movie2 = "Bucky is awesome I love him";

    puts(movie2);

    movie2 = "New movie title";

    puts(movie2);

    return 0;
}
