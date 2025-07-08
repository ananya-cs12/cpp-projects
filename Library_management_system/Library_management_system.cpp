#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    string status;
};

//To add a new book
void Add_Book() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, b.title);
    cout << "Enter Book Author: ";
    getline(cin, b.author);
    b.status = "Available";

    ofstream F("Library.txt", ios::app);
    if (F.is_open()) {
        F << b.id << '\t' << b.title << '\t' << b.author << '\t' << b.status << '\n';
        F.close();
        cout << "Book added successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
}

//To view all books
void view_all_books() {
    ifstream F("Library.txt");
    if (F.is_open()) {
        Book b;
        cout << left << setw(5) << "ID" 
             << setw(25) << "Title" 
             << setw(25) << "Author" 
             << setw(15) << "Status" << endl;
        cout << "--------------------------------------------------------------" << endl;
        while (F >> b.id) {
            F.ignore(); //to skip tab
            getline(F, b.title, '\t');
            getline(F, b.author, '\t');
            getline(F, b.status);
            cout << left << setw(5) << b.id 
                 << setw(25) << b.title 
                 << setw(25) << b.author 
                 << setw(15) << b.status << endl;
        }
        F.close();
    } else {
        cout << "Error opening file!" << endl;
    }
}

// To search  book by title
void search_book() {
    string title;
    cout << "Enter the title of the book to search: ";
    cin.ignore();
    getline(cin, title);

    ifstream F("Library.txt");
    bool found = false;
    Book b;

    if (F.is_open()) {
        while (F >> b.id) {
            F.ignore();
            getline(F, b.title, '\t');
            getline(F, b.author, '\t');
            getline(F, b.status);

            if (b.title == title) {
                cout << "Book found:\n";
                cout << left << setw(5) << "ID" 
                     << setw(25) << "Title" 
                     << setw(25) << "Author" 
                     << setw(15) << "Status" << endl;
                cout << left << setw(5) << b.id 
                     << setw(25) << b.title 
                     << setw(25) << b.author 
                     << setw(15) << b.status << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book not found!" << endl;
        }
        F.close();
    } else {
        cout << "Error opening file!" << endl;
    }
}

// To borrow  book
void borrow_book() {
    string title;
    cout << "Enter the title of the book to borrow: ";
    cin.ignore();
    getline(cin, title);

    ifstream F1("Library.txt");
    ofstream F2("Temp.txt");
    Book b;
    bool borrowed = false;

    if (F1.is_open() && F2.is_open()) {
        while (F1 >> b.id) {
            F1.ignore();
            getline(F1, b.title, '\t');
            getline(F1, b.author, '\t');
            getline(F1, b.status);

            if (b.title == title && b.status == "Available") {
                b.status = "Borrowed";
                borrowed = true;
                cout << "Book borrowed successfully!" << endl;
            }

            F2 << b.id << '\t' << b.title << '\t' << b.author << '\t' << b.status << '\n';
        }
        F1.close();
        F2.close();

        remove("Library.txt");
        rename("Temp.txt", "Library.txt");

        if (!borrowed) {
            cout << "Book not found or already borrowed." << endl;
        }
    } else {
        cout << "Error opening file!" << endl;
    }
}

// To return book
void return_book() {
    string title;
    cout << "Enter the title of the book to return: ";
    cin.ignore();
    getline(cin, title);

    ifstream F1("Library.txt");
    ofstream F2("Temp.txt");
    Book b;
    bool returned = false;

    if (F1.is_open() && F2.is_open()) {
        while (F1 >> b.id) {
            F1.ignore();
            getline(F1, b.title, '\t');
            getline(F1, b.author, '\t');
            getline(F1, b.status);

            if (b.title == title && b.status == "Borrowed") {
                b.status = "Available";
                returned = true;
                cout << "Book returned successfully!" << endl;
            }

            F2 << b.id << '\t' << b.title << '\t' << b.author << '\t' << b.status << '\n';
        }
        F1.close();
        F2.close();

        remove("Library.txt");
        rename("Temp.txt", "Library.txt");

        if (!returned) {
            cout << "Book not found or already available." << endl;
        }
    } else {
        cout << "Error opening file!" << endl;
    }
}


int main() {
    int choice;
    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. View all Books\n";
        cout << "3. Search Book by Title\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: Add_Book(); break;
            case 2: view_all_books(); break;
            case 3: search_book(); break;
            case 4: borrow_book(); break;
            case 5: return_book(); break;
            case 6: cout << "Exiting. Thank you!" << endl; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}

