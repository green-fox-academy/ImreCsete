#include <iostream>
#include <stdexcept>

using namespace std;

void test() throw(int, char, runtime_error) {

    //throw 20;

    //throw 'c';

    throw runtime_error("what the heck");

}

int main()
{
    try {

        test();

    } catch(int e) {
        cout << "integer type " << e << endl;
    } catch(char c) {
        cout << "character type " << c << endl;
    } catch(runtime_error r) {
        cout << "runtime error " << r.what() << endl;
    }

    return 0;
}

