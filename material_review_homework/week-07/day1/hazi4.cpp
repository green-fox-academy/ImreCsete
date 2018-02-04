#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try {

        //throw "some exception";

        throw 20;

        //throw runtime_error("runtime error");

    /*} catch(const char *err) {
        cout << err << endl; */
    } catch(int error) {
        cout << error << endl;
    /*} catch(runtime_error e) {
        cout << e.what() << endl;*/
    } catch(...) {
        cout << "some exception occured" << endl;
    }

    return 0;
}

