#include <iostream>
#include <string>

using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.

string take_string(string const& text1, string const& text2);
string take_string(string const& text1, string const& text2, string const& text3);
string take_string(string const& text1, string const& text2, string const& text3, string const& text4);

int main()
{

    cout << take_string("This is an", " added string") << endl << take_string("This string", " has three", " parts.") << endl << take_string("Four parts", " are more", " than", " three.");

	return 0;
}

string take_string(string const& text1, string const& text2)
{
    return text1 + text2;
}

string take_string(string const& text1, string const& text2, string const& text3)
{
    return text1 + text2 + text3;
}

string take_string(string const& text1, string const& text2, string const& text3, string const& text4)
{
    return text1 + text2 + text3 + text4;
}
