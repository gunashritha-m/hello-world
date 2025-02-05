#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void countdown(int seconds) {
    while (seconds > 0) {
        cout << "Time remaining: " << seconds << " seconds" << endl;
        this_thread::sleep_for(chrono::seconds(1)); // Wait for 1 second
        seconds--;
    }
    cout << "Time's up!" << endl;
}

int main() {
    int startTime;
    cout << "Enter the countdown time in seconds: ";
    cin >> startTime;

    countdown(startTime);

    return 0;
}
