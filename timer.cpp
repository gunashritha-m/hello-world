#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void countdown(int seconds) {
    cout << "Countdown starting now!" << endl;
    while (seconds > 0) {
        cout << "Time remaining: " << seconds << " seconds" << endl;
        this_thread::sleep_for(chrono::seconds(1)); 
        seconds--;
    }
    cout << "Time's up! Good job!" << endl;  
}

int main() {
    int startTime;
    cout << "Enter the countdown time in seconds: ";
    cin >> startTime;

    countdown(startTime);

    return 0;
}
