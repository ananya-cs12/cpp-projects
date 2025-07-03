#include <iostream>
using namespace std;

// Function to print multiplication table
void printTable(int n) {
    cout << "\nMultiplication Table for " << n << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;

    cout << "==== Multiplication Table Generator ====" << endl;
    cout << "Enter a number: ";
    cin >> n;


    if (n == 0) {
        cout << "Table of 0 will only give 0s. Try a non-zero number." << endl;
    } else {
        printTable(n);
    }

    return 0;
}
