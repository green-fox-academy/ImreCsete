#include "Utility.h"
#include <iostream>
#include <string>
#include <windows.h>

#include "Temperature.h"

using namespace std;

void command_list()
{
    cout << "Temperature Logger Application" << endl
        <<  "==============================" << endl
        << "Commands:" << endl
        << "h        Show command list" << endl
        << "o        Open port" << endl
        << "s        Start logging / Stop logging" << endl
        << "c        Close port" << endl
        << "l        List after error handling" << endl
        << "e        Exit from the program" << endl << endl;
}

int loop_breaker()
{
    if (GetAsyncKeyState(0x53) & 0x8000) {
            return 0;
    }

    return 1;
}
