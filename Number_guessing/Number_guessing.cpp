#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Returns a random float between 0.0 and 1.0
double random() {
    return (double)rand() / RAND_MAX;
}

// Returns a random integer between min and max (inclusive)
int randomInt(int min, int max) {
    return (int)(random() * (max - min + 1)) + min;
}

int main() {
    cout << "=== Number Guessing Game ===" << endl;

    srand(time(0)); // Seed the random number generator

    int lower = randomInt(1, 30);
    int upper = randomInt(lower + 20, 100);
    int secret = randomInt(lower, upper);

    int guess, attempts = 0;

    cout << "I'm thinking of a number between " << lower << " and " << upper << "." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < lower || guess > upper) {
            cout << "Please guess a number in the range " << lower << " to " << upper << "." << endl;
            continue;
        }

        attempts++;

        if (guess > secret) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secret) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "You guessed it in " << attempts << " attempt(s)! The number was " << secret << "." << endl;
            break;
        }
    }

    return 0;
}
