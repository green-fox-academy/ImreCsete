#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "math.h"

// TODO: Create a function which takes an integer as a parameter and returns true if that number is prime and false if it is not.

bool Test_Prime(unsigned int prime) {

    int limit = sqrt((float)prime);

    for (int i = 2; i <= limit; i++) {
        if ((prime % i) == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}

TEST_CASE( "Checks if prime", "[prime]" ) {
    REQUIRE( Test_Prime(2) == true );
    REQUIRE( Test_Prime(3) == true );
    REQUIRE( Test_Prime(4) == false );
    REQUIRE( Test_Prime(5) == true );
    REQUIRE( Test_Prime(6) == false );
    REQUIRE( Test_Prime(7) == true );
    REQUIRE( Test_Prime(8) == false );
    REQUIRE( Test_Prime(9) == false );
    REQUIRE( Test_Prime(10) == false );
    REQUIRE( Test_Prime(11) == true );
}
