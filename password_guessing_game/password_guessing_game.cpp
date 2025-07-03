#include <iostream>
using namespace std;

// Function to check the password
bool checkPassword(const string& input) {
    const string correctPassword = "Admin123";
    return input == correctPassword;
}

int main() {
    string pswd;
    int attempts = 0;
    const int maxAttempts = 3;

    cout << "==== Password Checker ====" << endl;

    while (attempts < maxAttempts) {
        cout << "Enter password: ";
        cin >> pswd;

        if (checkPassword(pswd)) {
            cout << "Access granted!" << endl;
            return 0;
        } else {
            cout << "Incorrect password. Try again." << endl;
            attempts++;
        }
    }

    cout << "Too many failed attempts. Access denied." << endl;
    return 0;
}
