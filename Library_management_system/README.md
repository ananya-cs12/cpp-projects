#  Library Management System (C++)

A beginner-friendly console-based C++ project to manage library books — including adding, viewing, searching, borrowing, and returning books — using **file handling** and **simple formatting**.

---

##  Features

-  Add new books with ID, title, and author.
-  View all books in a clean tabular format.
-  Search for a book by its title.
-  Borrow a book (only if available).
-  Return a book (only if previously borrowed).
-  Persistent storage using `Library.txt` file.
-  Uses basic **file handling**, **loops**, **conditions**, and `setw()` formatting 

---

## Sample Output
===== Library Management System =====<br>
1. Add Book<br>
2. View all Books<br>
3. Search Book by Title<br>
4. Borrow Book<br>
5. Return Book<br>
6. Exit<br>
Enter your choice: 1<br>
Enter Book ID: 103<br>
Enter Book Title: Haunting Adeline<br>
Enter Book Author: H.D.Carlton<br>
Book added successfully!<br>

===== Library Management System =====<br>
1. Add Book<br>
2. View all Books<br>
3. Search Book by Title<br>
4. Borrow Book<br>
5. Return Book<br>
6. Exit<br>
Enter your choice: 1<br>
Enter Book ID: 103<br>
Enter Book Title: Haunting Adeline<br>
Enter Book Author: H.D.Carlton<br>
Book added successfully!<br>

===== Library Management System =====<br>
1. Add Book<br>
2. View all Book<br>
3. Search Book by Title<br>
4. Borrow Book<br>
5. Return Book<br>
6. Exit<br>
Enter your choice: 2<br>
ID   Title                    Author                   Status<br>
--------------------------------------------------------------<br>
101  Shatter Me               Tahereh Mafi             Available<br>
102  Ignite Me                Tahereh Mafi             Available<br>  
103  Haunting Adeline         H.D.Carlton              Available<br>

===== Library Management System =====<br>
1. Add Book<br>
2. View all Books<br>
3. Search Book by Title<br>
4. Borrow Book<br>
5. Return Book<br>
6. Exit<br>
Enter your choice: 3<br>
Enter the title of the book to search: Ignite Me<br>
Book found:<br>
ID   Title                    Author                   Status<br>
102  Ignite Me                Tahereh Mafi             Available<br>

===== Library Management System =====<br>
1. Add Book<br>
2. View all Books<br>
3. Search Book by Title<br>
4. Borrow Book<br>
5. Return Book<br>
6. Exit<br>
Enter your choice: 4<br>
Enter the title of the book to borrow: Ignite Me<br>
Book borrowed successfully!<br>

===== Library Management System =====<br>
1. Add Book<br>
2. View all Books<br>
3. Search Book by Title<br>
4. Borrow Book<br>
5. Return Book<br>
6. Exit<br>
Enter your choice: 2<br>
ID   Title                    Author                   Status<br>
--------------------------------------------------------------<br>
101  Shatter Me               Tahereh Mafi             Available<br>
102  Ignite Me                Tahereh Mafi             Borrowed<br>
103  Haunting Adeline         H.D.Carlton              Available<br>

===== Library Management System =====<br>
1. Add Book<br>
2. View all Books<br>
3. Search Book by Title<br>
4. Borrow Book<br>
5. Return Book<br>
6. Exit<br>
Enter your choice: 5<br>
Enter the title of the book to return: Ignite Me<br>
Book returned successfully!

---
## License

This project is licensed under the [MIT License](./LICENSE).






