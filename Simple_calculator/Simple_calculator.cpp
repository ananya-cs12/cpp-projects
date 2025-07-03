#include <iostream>
using namespace std;

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    char op;

    cout << "==== Simple Calculator ====" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Adding numbers..." << endl;
            cout << "Result: " << add(num1, num2) << endl;
            break;

        case '-':
            cout << "Subtracting numbers..." << endl;
            cout << "Result: " << subtract(num1, num2) << endl;
            break;

        case '*':
            cout << "Multiplying numbers..." << endl;
            cout << "Result: " << multiply(num1, num2) << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Dividing numbers..." << endl;
                cout << "Result: " << divide(num1, num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "Invalid operator entered." << endl;
            break;
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b; 
}
