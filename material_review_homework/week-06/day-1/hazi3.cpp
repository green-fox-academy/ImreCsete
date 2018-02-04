#include <iostream>

using namespace std;

#include "file_one.cpp"
#include "file_two.cpp"

int main()
{

    one :: display();
    two :: display();

    using namespace one;
    display();

    return 0;
}
