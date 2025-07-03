#include <iostream>
using namespace std;

// Function to determine grade letter based on percentage
char calculateGrade(int percent) {
    if (percent >= 90 && percent <= 100) return 'A';
    else if (percent >= 80 && percent < 90) return 'B';
    else if (percent >= 70 && percent < 80) return 'C';
    else if (percent >= 60 && percent < 70) return 'D';
    else if (percent >= 0 && percent < 60) return 'F';
    else return 'X'; // X means invalid input
}

int main() {
    int grade;

    cout << "==== Grade Calculator ====" << endl;
    cout << "Enter your grade percentage (0 - 100): ";
    cin >> grade;

    char result = calculateGrade(grade);

    if (result == 'X') {
        cout << "Invalid grade entered. Please enter a value between 0 and 100." << endl;
    } else {
        cout << "You got a grade: " << result << endl;
    }

    return 0;
}
