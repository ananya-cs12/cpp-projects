#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

// Structure to represent a student
struct Student {
    int RollNo;
    string Name;
    string course;
    float marks1, marks2, marks3;

    // Function to calculate average percentage
    float getPercentage() {
        return (marks1 + marks2 + marks3) / 3.0;
    }
};

// Function to add a new student record
void addStudent() {
    Student s;
    cout << "Enter Student Details:\n";
    cout << "Enter Roll Number: ";
    cin >> s.RollNo;
    cout << "Enter Name (no spaces): ";//specifing no spaces because getline is not used
    cin >> s.Name;
    cout << "Enter Course (no spaces): ";//specifing no spaces because getline is not used
    cin >> s.course;
    cout << "Enter Marks 1: ";
    cin >> s.marks1;
    cout << "Enter Marks 2: ";
    cin >> s.marks2;
    cout << "Enter Marks 3: ";
    cin >> s.marks3;

    ofstream File("StudentRecords.txt", ios::app);
    if (File.is_open()) {
        File << s.RollNo <<"\t"<< s.Name << "\t" << s.course << "\t"
             << s.marks1 << "\t" << s.marks2 << "\t" << s.marks3 << endl;
        File.close();
        cout << "Student record added successfully!\n";
    } else {
        cout << "Error opening file!\n";
    }
}

// Function to display all student records
void display_all_students() {
    ifstream F("StudentRecords.txt");
    cout << "Roll No\tName\tCourse\tMarks1\tMarks2\tMarks3\tPercentage\n";
    if (F.is_open()) {
        Student s;
        while (F >> s.RollNo >> s.Name >> s.course >> s.marks1 >> s.marks2 >> s.marks3) {
            cout << s.RollNo << "\t" << s.Name << "\t" << s.course << "\t"
                 << s.marks1 << "\t" << s.marks2 << "\t" << s.marks3 << "\t"
                 << s.getPercentage() << endl;
        }
        F.close();
    } else {
        cout << "Error opening file!\n";
    }
}

// Function to search for a student by Roll Number
void search_student_by_rno() {
    ifstream F2("StudentRecords.txt");
    int rno;
    cout << "Enter Roll Number to search: ";
    cin >> rno;
    Student s;
    bool found = false;
    while (F2 >> s.RollNo >> s.Name >> s.course >> s.marks1 >> s.marks2 >> s.marks3) {
        if (s.RollNo == rno) {
            cout << "Student Found:\n";
            cout << "Roll No: " << s.RollNo << "\nName: " << s.Name
                 << "\nCourse: " << s.course << "\nMarks 1: " << s.marks1
                 << "\nMarks 2: " << s.marks2 << "\nMarks 3: " << s.marks3
                 << "\nPercentage: " << s.getPercentage() << endl;
            found = true;
            return;
        }
    }
    if (!found) {
        cout << "Student with Roll Number " << rno << " not found!\n";
    }
}

// Function to modify an existing student record
void modify_record() {
    ifstream F3("StudentRecords.txt");
    ofstream F4("Temp.txt", ios::app);
    int rn;
    cout << "Enter Roll Number to modify: ";
    cin >> rn;

    Student s;
    bool found = false;

    while (F3 >> s.RollNo >> s.Name >> s.course >> s.marks1 >> s.marks2 >> s.marks3) {
        if (s.RollNo == rn) {
            cout << "Record Found. Enter New Details:\n";
            cout << "New Name (no spaces): ";
            cin >> s.Name;
            cout << "New Course (no spaces): ";
            cin >> s.course;
            cout << "New Marks 1: ";
            cin >> s.marks1;
            cout << "New Marks 2: ";
            cin >> s.marks2;
            cout << "New Marks 3: ";
            cin >> s.marks3;
            found = true;
        }
        F4 << s.RollNo << " " << s.Name << " " << s.course << " "
            << s.marks1 << " " << s.marks2 << " " << s.marks3 << endl;
    }

    F3.close();
    F4.close();

    remove("StudentRecords.txt");
    rename("Temp.txt", "StudentRecords.txt");

    if (found)
        cout << "Record updated successfully!\n";
    else
        cout << "Roll Number not found!\n";
}

// Function to delete a student record
void delete_record() {
    ifstream F3("StudentRecords.txt");
    ofstream F4("Temp.txt", ios::app);
    int rn;
    cout << "Enter Roll Number to delete: ";
    cin >> rn;

    Student s;
    bool found = false;

    while (F3 >> s.RollNo >> s.Name >> s.course >> s.marks1 >> s.marks2 >> s.marks3) {
        if (s.RollNo == rn) {
            found = true; // Don't write this record (delete it)
            continue;
        }
        F4 << s.RollNo << " " << s.Name << " " << s.course << " "
            << s.marks1 << " " << s.marks2 << " " << s.marks3 << endl;
    }

    F3.close();
    F4.close();

    remove("StudentRecords.txt");
    rename("Temp.txt", "StudentRecords.txt");

    if (found)
        cout << "Record deleted successfully!\n";
    else
        cout << "Roll Number not found!\n";
}

// Main Menu
int main() {
    int ch;
    do {
        cout << "\n===== Student Record Management =====\n";
        cout << "1. Add New Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search by Roll Number\n";
        cout << "4. Modify Record\n";
        cout << "5. Delete Record\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                addStudent();
                break;
            case 2:
                display_all_students();
                break;
            case 3:
                search_student_by_rno();
                break;
            case 4:
                modify_record();
                break;
            case 5:
                delete_record();
                break;
            case 6:
                cout << "Exited\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (ch != 6);

    return 0;
}
