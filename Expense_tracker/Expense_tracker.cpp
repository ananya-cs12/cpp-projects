#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

// Structure to hold expense details
struct Expense
{
    string date;
    string type;
    float amount;
};

// Function to add an expense to the file
void addExpense()
{
    Expense ex;

    cout << "Enter date (DD/MM/YYYY): ";
    cin >> ex.date;

    cout << "Enter type of expense: ";
    cin.ignore(); // clears the input buffer before using getline
    getline(cin, ex.type);

    cout << "Enter amount: ";
    cin >> ex.amount;

    // validate amount
    if (ex.amount < 0) {
        cout << "Amount cannot be negative. Please enter a valid amount." << endl;
        return;
    }

    // open file in append mode
    ofstream f1("expenses.txt", ios::app);
    if (f1.is_open()) {
        f1 << setw(15) << ex.date << setw(20) << ex.type << setw(10) << ex.amount << endl;
        f1.close();
        cout << "Expense added successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
}

// Function to display all expenses from the file
void view_expenses()
{
    ifstream f1("expenses.txt");
    if (f1.is_open()) {
        cout << setw(15) << "Date" << setw(20) << "Type" << setw(10) << "Amount" << endl;
        cout << "----------------------------------------" << endl;

        string line;
        while (getline(f1, line)) {
            cout << line << endl;
        }

        f1.close();
    } else {
        cout << "Error opening file!" << endl;
    }
}

int main() {
    cout << "*********** EXPENSE TRACKER ***********" << endl;
    cout << "----------------------------------------" << endl;

    int choice;

    // add headers if the file is empty
    ifstream F("expenses.txt");
    if (F.peek() == EOF) {
        ofstream f1("expenses.txt");
        f1 << setw(15) << "Date" << setw(20) << "Type" << setw(10) << "Amount" << endl;
        f1.close();
    }
    F.close();

    // menu loop
    do {
        cout << "Please select an option from the menu." << endl;
        cout << "----------------------------------------" << endl;
        cout << "1. Add Expense" << endl;
        cout << "2. View Expenses" << endl;
        cout << "3. Exit" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            addExpense();
        } else if (choice == 2) {
            view_expenses();
        } else if (choice == 3) {
            cout << "Exiting the program." << endl;
            cout << "Thank you for using the Expense Tracker!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}
