#include "ParentClass.h"
#include "ParentClass.cpp"
#include "ChildClass.h"
#include "ChildClass.cpp"
#include <iostream>
#include <string>

using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a pointer.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*

int main()
{
    //ParentClass* pc = new ChildClass();

    //ParentClass pc;
    ParentClass* cc = new ChildClass();

    //cout << pc->string_one() << endl;
    //cout << pc->string_two() << endl;

    /*cout << pc.string_one() << endl;
    cout << pc.string_two() << endl;*/

    cout << "-------------------------------------" << endl;

    cout << cc->string_one() << endl;
    cout << cc->string_two() << endl;

    return 0;
}
