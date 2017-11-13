#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
    string name = "Imre Csete";
    int age = 26;
    double height = 1.80;
    bool married = 0;

    cout << name << " " << age << " " << fixed << setprecision(2) << height << " " << boolalpha << married;

    return 0;
}
