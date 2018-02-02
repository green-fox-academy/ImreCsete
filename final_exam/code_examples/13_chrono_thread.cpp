#include <iostream>
#include <string>
#include <thread>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace chrono;

// Create a simple program which has a time lock
// The program should ask for a user input, but the user only has
// 10 seconds to reply, if the user fails (reaches the time limit)
// the program should print out: "failed, it took you too much time"
// This program cloud be the engine of a quiz game.

void time_lock();
void user_input();

int main()
{
    clock_t start = clock();

    thread t1(user_input);
    thread t2(time_lock);

    t1.join();
    t2.join();

    return 0;
}

void time_lock()
{
    auto start = high_resolution_clock::now();

    this_thread::sleep_for(seconds(10));

    cout << endl << "Failed, it took you too much time!" << endl;

    exit(0);
}

void user_input()
{
    string input;
    cout << "You have 10 seconds to enter your input!" << endl;
    getline(cin, input);
    cout << "Your input was: " << input << endl;

    exit(0);
}
