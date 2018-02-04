#include <iostream>
#include "Sally.h"

using namespace std;

Sally::Sally()
{

}

Sally::Sally(int a)
{
    num = a;
}

Sally Sally::operator+(Sally AnotherSallyObject)
{
    Sally brandNew;
    brandNew.num = num + AnotherSallyObject.num;
    return(brandNew);
}
