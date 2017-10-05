#include <stdio.h>
double squareRoot(double n) {
   double i, precision = 0.00001;

   for(i = 1; i*i <=n; ++i);

   for(--i; i*i < n; i += precision);
    //google-fu
   return i;
}
int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	if (j1 > squareRoot(j2) && j1 < j2*j2*j2){
        printf("%d is higher than %lf and smaller than %d", j1, squareRoot(j2), j2*j2*j2);
    } else
        printf("%d is not higher than %lf and not smaller %d", j1, squareRoot(j2), j2*j2*j2);
    return 0;
}
