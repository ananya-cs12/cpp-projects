#include <iostream>
using namespace std;

int main() {
    int timer;

    cout << "==== Countdown Timer ====" << endl;
    cout << "Enter time in seconds: ";
    cin >> timer;

    // Check for valid input
    if (timer < 0) {
        cout << "Invalid input. Please enter a non-negative number." << endl;
        return 1;
    }

    while (timer >= 0) {
        cout << "Time left: " << timer << " second" << (timer == 1 ? "" : "s") << endl;
        timer--;
    }

    cout << "Time's up!" << endl;
    return 0;
}
