#include "Utility.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace chrono;


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

int timeout()
{
    using namespace chrono;

    auto start = high_resolution_clock::now();

    this_thread::sleep_for(minutes(10));

    exit(0);
}
