#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

Daughter::Daughter()
{
    cout << "I am the daughter constructor!" << endl;
}

Daughter::~Daughter()
{
    cout << "I am the daughter deconstructor!" << endl;
}
