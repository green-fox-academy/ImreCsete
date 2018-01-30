#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

// TODO: Create a function which takes an array of integer as a parameter and returns the sum of the elements.
int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int Test_Array(int *arr, int size) {

   int sum = 0;

   for (uint8_t i = 0; i < size; ++i) {
      sum += arr[i];
   }

   return sum;
}

TEST_CASE( "Elements are summed", "[sum]" ) {
    REQUIRE( Test_Array(arr, 1) == 0 );
    REQUIRE( Test_Array(arr, 2) == 1 );
    REQUIRE( Test_Array(arr, 3) == 3 );
    REQUIRE( Test_Array(arr, 4) == 6 );
    REQUIRE( Test_Array(arr, 5) == 10 );
    REQUIRE( Test_Array(arr, 6) == 15 );
    REQUIRE( Test_Array(arr, 7) == 21 );
    REQUIRE( Test_Array(arr, 8) == 28 );
    REQUIRE( Test_Array(arr, 9) == 36 );
    REQUIRE( Test_Array(arr, 10) == 45 );
}
