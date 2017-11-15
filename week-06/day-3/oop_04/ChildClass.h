#ifndef CHILDCLASS_H
#define CHILDCLASS_H
#include <string>

using namespace std;

class ChildClass: public ParentClass
{
    public:
        string string_one();
        string string_two();

    protected:

    private:
};

#endif // CHILDCLASS_H
