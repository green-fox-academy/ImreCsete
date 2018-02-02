#include <iostream>
#include <string>
#include <vector>

using namespace std;

string validity_check_year(string for_check);
string validity_check_month(string for_check);
string validity_check_day(string for_check);
string validity_check_hour(string for_check);
string validity_check_minute(string for_check);
string validity_check_second(string for_check);
string validity_check_temperature(string for_check);

int main()
{
    string line1 = "1943027.3.30 12:15:62 86";
    string line2 = "2015.4.18 22:4:12 199";
    string line3 = "2016.8.2 0:8:2 cica";
    string line4 = "2015.11.30 22:66:62";
    string line5 = "1942.12.4 7:12:4 53";
    string line6 = "1998.3.35 19:15:8 117";
    string line7 = "2222.88.1 6:60:21 70";

    cout << "Year: " << validity_check_year(line1) << endl;
    cout << "Month: " << validity_check_month(line1) << endl;
    cout << "Day: " << validity_check_day(line1) << endl;
    cout << "Hour: " << validity_check_hour(line1) << endl;
    cout << "Minute: " << validity_check_minute(line1) << endl;
    cout << "Second: " << validity_check_second(line1) << endl;
    cout << "Temperature: " << validity_check_temperature(line1) << endl;
}

string validity_check_year(string for_check)
{
    string year = for_check.substr(0, for_check.find_first_of("."));

    return year;
}

string validity_check_month(string for_check)
{
    string month = for_check.substr(for_check.find_first_of("."), (for_check.find_last_of(".") - for_check.find_first_of(".")));

    return month;
}

string validity_check_day(string for_check)
{
    string day = for_check.substr(for_check.find_last_of("."), (for_check.find_first_of(" ")-for_check.find_last_of(".")));

    return day;
}

string validity_check_hour(string for_check)
{
    string hour = for_check.substr(for_check.find_first_of(" "), (for_check.find_first_of(":") - for_check.find_first_of(" ")));

    return hour;
}

string validity_check_minute(string for_check)
{
    string minute = for_check.substr(for_check.find_first_of(":"), (for_check.find_last_of(":") - for_check.find_first_of(":")));

    return minute;
}

string validity_check_second(string for_check)
{
    string second = for_check.substr(for_check.find_last_of(":"), (for_check.find_last_of(" ") - for_check.find_last_of(":")));

    return second;
}

string validity_check_temperature(string for_check)
{
    string temperature = for_check.substr(for_check.find_last_of(" "), for_check.find_last_not_of(" "));

    return temperature;
}
