#  Expense Tracker (C++)

A beginner-friendly C++ project that allows you to **add** and **view** your daily expenses. This project is built using basic file handling, `struct`, and menu-driven programming logic — perfect for those learning how to manage and store data in files.

---

## Features

-  Add a new expense (date, type, amount)
-  View all recorded expenses in a tabular format
-  Stores data in `expenses.txt` for permanent access
-  Prevents negative amounts from being entered
-  Simple menu system with continuous loop until exit

---

## File Handling
All expense entries are saved in a plain text file:<br>
expenses.txt<br>
Example format:<br>
Date                    Type        Amount<br>
 01/07/2025           Groceries     350.00<br>
 03/07/2025          Electricity   1200.50<br>
 
 ---

## Sample Output
*********** EXPENSE TRACKER ***********<br>
----------------------------------------<br>
Please select an option from the menu.<br>
----------------------------------------<br>
1. Add Expense<br>
2. View Expenses<br>
3. Exit<br>
----------------------------------------<br>
Enter your choice: 1<br>
Enter date (DD/MM/YYYY): 05/07/2025<br>
Enter type of expense: Stationery<br>
Enter amount: 120.50<br>
Expense added successfully!<br>
*********** EXPENSE TRACKER ***********<br>
---------------------------------------------<br>
Please select an option from the menu.<br>
---------------------------------------------<br>
1. Add Expense<br>
2. View Expenses<br>
3. Exit<br>
---------------------------------------------<br>
Enter your choice: 2<br>
   Date                   Type         Amount <br>
----------------------------------------------<br>
     01/07/2025         Groceries      300.00<br>
     03/07/2025        Transport        80.00<br>
     05/07/2025        Stationery      120.50<br>
----------------------------------------------<br>
*********** EXPENSE TRACKER ***********<br>
---------------------------------------------<br>
Please select an option from the menu.
---------------------------------------------<br>
1. Add Expense<br>
2. View Expenses<br>
3. Exit<br>
---------------------------------------------<br>
Enter your choice: 3<br>
Exiting the program.<br>
Thank you for using the Expense Tracker!<br>

<p align="center"><b>Built by Ananya Singh</b></p> ```

