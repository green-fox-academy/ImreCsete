#include <iostream>

using namespace std;

// Now, create 2 functions. They should bear the same name.
// These functions should multiply their parameters.
// The first should return float and take two arguments of the type float.
// The second function should return int and take two arguments of integer type.
// Use these two functions and print out the results.
//
// Compile the code You wrote. Note the output of the compiler. Think about it, google it.
// Now, put one of the functions into comment. (So it's still legible but won't compile.)
// Try compiling it again, and watch what the results are.
//
// Switch the two function declarations. Uncomment the one You commented out and comment out the one
// that ran before. Compile it and compare the results again.
//
// What did You learn from this exercise?
// Write it down in a comment into Your file!

float multiplier(float a, float b);
int multiplier(int a, int b);

int main()
{
    cout << multiplier(2.0f, 5.0f) << endl << multiplier(2, 5); // You have to write f if you want to input float, otherwise it defaults to double

	return 0;
}

float multiplier(float a, float b)
{
    return a * b;
}

int multiplier(int a, int b)
{
    return a * b;
}
