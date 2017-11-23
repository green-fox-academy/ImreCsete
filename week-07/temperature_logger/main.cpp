#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>

#include "SerialPortWrapper.h"

using namespace std;

void command_list();
int timeout();

int main()
{
    vector <string> output;
    vector <string> user_input;

    command_list();

    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }

    // connection

        SerialPortWrapper *serial = new SerialPortWrapper("COM5", 115200);
        serial->openPort();
        string line;
        thread t1(timeout);
        while(1){
        serial->readLineFromPort(&line);
        if (line.length() > 0){
        cout << line << endl;
        }
        }
        serial->closePort();

    return 0;
}

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
