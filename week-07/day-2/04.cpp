#include <iostream>

using namespace std;

// Create a Class named Integer. It should have one int get() variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the get() variable of this.
//
// Try them out. Write code that demonstrates how they work.

class Integer {
    public:
        int member;

        void reset(int num)
        {
             member = num;
        }

        Integer(int num)
        {
            member = num;
        }

        int get()
        {
            return member;
        }

        int add(Integer& int1)
        {
            member = member + int1.get();

            return get();
        }

        int add(Integer& int1, Integer& int2)
        {
            member = member + int1.get() + int2.get();

            return get();
        }

        int add(Integer& int1, Integer& int2, Integer& int3)
        {
            member = member + int1.get() + int2.get() + int3.get();

            return get();
        }

        int add(Integer& int1, Integer& int2, Integer& int3, Integer& int4)
        {
            member = member + int1.get() + int2.get() + int3.get() + int4.get();

            return get();
        }

        int add(Integer& int1, Integer& int2, Integer& int3, Integer& int4, Integer& int5)
        {
            member = member + int1.get() + int2.get() + int3.get() + int4.get() + int5.get();

            return get();
        }
};

int main()
{
    Integer proba1(1);
    Integer proba2(2);
    Integer proba3(3);
    Integer proba4(4);
    Integer proba5(5);

    proba1.reset(1);
    cout << "Adding 1: " << proba1.add(proba1) << endl;
    proba1.reset(1);
    cout << "Adding 2: " << proba1.add(proba1, proba2) << endl;
    proba1.reset(1);
    cout << "Adding 3: " << proba1.add(proba1, proba2, proba3) << endl;
    proba1.reset(1);
    cout << "Adding 4: " << proba1.add(proba1, proba2, proba3, proba4) << endl;
    proba1.reset(1);
    cout << "Adding 5: " << proba1.add(proba1, proba2, proba3, proba4, proba5) << endl;

	return 0;
}
