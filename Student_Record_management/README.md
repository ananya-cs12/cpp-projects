# Student Record Management System (C++)

This is a simple Student Record Management System built using C++ and file handling. It allows basic operations like adding, displaying, searching, modifying, and deleting student records stored in a text file.

## Features

- Add new student records
- Display all records
- Search student by Roll Number
- Modify an existing record
- Delete a student record
- Calculates percentage from 3 marks
- Uses file handling instead of arrays or STL

## Data Storage

- Records are stored in a plain text file: `StudentRecords.txt`
- Each record contains:
  - Roll Number
  - Name
  - Course
  - Marks (3 subjects)
  - Percentage (calculated when needed)

## How It Works

- Data is entered by the user and appended to the file.
- For search/modify/delete, the program reads each record from the file line by line.
- In modification and deletion, a temporary file is used to rewrite updated content and replace the original file.


## Sample 
===== Student Record Management =====<br>
1. Add New Student<br>
2. Display All Students<br>
3. Search by Roll Number<br>
4. Modify Record<br>
5. Delete Record<br>
6. Exit
