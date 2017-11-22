#include <iostream>

using namespace std;

// Take the Integer class from the previous exercise and add two methods:
// One which takes an Integer& parameter and adds the value of it to the member variable of this.
// One which takes an int and adds the value of it to the member variable of this.
//
// Write code which uses them both and Prints out the results respectively.

int main()
{
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

        Integer(int num)
        {
            member = num;
        }

        int add(Integer& int1)
        {
            member = member + int1.get();

            return get();
        }

        int add(int member)
        {
            this->member = this->member + member;

            return get();
        }

};
    Integer proba1(256);

    cout << "Using add() method with member variable: " << proba1.add(proba1) << endl;
    cout << "Using add() method with integer variable: " << proba1.add(88) << endl;

	return 0;
}
