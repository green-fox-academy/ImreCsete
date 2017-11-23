#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <vector>
#include <string>

using namespace std;


class Temperature
{
    public:
        Temperature();
        ~Temperature();
        vector <string> output;
        string validity_check(string for_check);
        string user_input;

    protected:

    private:
};

#endif // TEMPERATURE_H
