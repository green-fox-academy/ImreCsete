#include <iostream>
#include <string>
#include <vector>
#include <thread>

#include "SerialPortWrapper.h"
#include "Temperature.h"
#include "Utility.h"

using namespace std;

int main()
{
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
