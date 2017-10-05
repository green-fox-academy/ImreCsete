#include <stdio.h>

double squareRoot(double n) {
   double i, precision = 0.00001;

   for(i = 1; i*i <=n; ++i);

   for(--i; i*i < n; i += precision);
    //google-fu ennyire nem vagyok okos még
   return i;
}

int main() {
	int f = 16;
	// please square root f's value
        printf("f %d = %lf", f, squareRoot(f));
	return 0;
}
