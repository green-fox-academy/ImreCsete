#include <iostream>

using namespace std;

// Take the Integer class from the previous exercise.
// Create 3 constructors for them:
// One empty which sets the member variable to 0;
// A copy constructor, that takes an Integer& argument
// A third one which takes an int as argument and makes the member variable equal to the int it took.
//
// Write code that uses these and prints out the value of the member variable of the integers created.
// (You will have to create a get method to do this appropriately.)

class Integer {
    public:
        int member;

        void set(int num)
        {
            member = num;
        }

        int get()
        {
            return member;
        }

        Integer()
        {
            member = 0;
        }

        Integer(Integer& num):member(num.member)
        {

        }

        Integer(int member)
        {
            this->member = member;
        }

};

int main()
{
    Integer proba;
    Integer proba2(234);
    Integer proba3(proba2);

    cout << proba.get() << endl << proba2.get() << endl << proba3.get() << endl;

	return 0;
}
