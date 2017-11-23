#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <windows.h>

#include "SerialPortWrapper.h"
#include "Temperature.h"
#include "Utility.h"

using namespace std;

int main()
{
    Temperature temp;

    command_list();

    while (temp.user_input != "e") {


        cout << "Please enter your command: ";
            getline(cin, temp.user_input);

        if (temp.user_input == "o") {

            vector<string> ports = SerialPortWrapper::listAvailablePorts();
            cout << "Number of found serial ports: " << ports.size() << endl;
            for (unsigned int i = 0; i < ports.size(); i++) {
                cout << "\tPort name: " << ports.at(i) << endl;
            }
        }
            // connection

        if (temp.user_input == "s") { thread t1(loop_breaker);
            SerialPortWrapper *serial = new SerialPortWrapper("COM5", 115200);
            serial->openPort();
            string line;
            cout << endl;
            while (1) {
                serial->readLineFromPort(&line);
                if (line.length() > 0){
                cout << line << endl;
                } if (loop_breaker() == 0) {
                    t1.join();
                    break;
                }
            }
            serial->closePort();
        }
    }
    return 0;
}
