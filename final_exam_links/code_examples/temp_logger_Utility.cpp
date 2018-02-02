#include "Utility.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <sstream>
#include <iomanip>
#include <ctime>

#include "Temperature.h"

using namespace std;

stream_input parseString(string line)
{
    int temperature;

	istringstream exampleStream(line);
	tm parsedDateTime;
	exampleStream >> get_time(&parsedDateTime, "%Y.%m.%d %H:%M:%S")
			>> temperature;
	if (exampleStream.fail()) {
		throw "Invalid string format!";
	}


	if (-30 > temperature || 50 < temperature) {
		throw "Temperature is out of range!";
	}

	long timestamp = mktime(&parsedDateTime);

	stream_input rec;
	rec.temperature = temperature;
	rec.timestamp = timestamp;
	return rec;
};

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
