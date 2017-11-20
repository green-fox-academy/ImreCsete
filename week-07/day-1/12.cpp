#include <iostream>
#include <string>

using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segment in a new try-catch block.

const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};

const char* write_element(int element);

int main()
{
    try {
        int word;

        cout << "Please enter the number of an element from the array: ";
        cin >> word;

        cout << write_element(word) << endl;

        } catch (unsigned int x) {
            cout << "Error: Number out of range by " << x << "." << endl;
        } catch (const char *error) {
            cout << "Error: " << error << "." << endl;
        }

    return 0;
}

const char* write_element(int element)
{
    if (element < 0) {
        throw "Negative number";
    }

    else if (sizeof(sentence) / sizeof(sentence[0]) <= element) {
        throw (element - sizeof(sentence) / sizeof(sentence[0]));
    }

    return sentence[element];

}
