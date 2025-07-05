# C++ Quiz Game

A console-based quiz game built in C++ that reads questions from a file and tests your knowledge in a fun way. Designed with flexibility, neat formatting, and clean logic.

---

## Features

- Reads questions from an external `.txt` file (no hardcoding)
- User can choose to attempt **5 or 10 questions**
- Calculates total score and displays result at the end
- Simple, structured, and beginner-friendly file I/O logic

---

##  Input File Format (`QuizSheet.txt`)

Each question in the file should follow this format (no blank lines between questions):<br>
Question text<br>
a) Option A<br>
b) Option B<br>
c) Option C<br>
d) Option D<br>
correct_option_letter (a/b/c/d)<br>

Like this:<br>
What is the size of int in C++?<br>
a) 2 bytes<br>
b) 4 bytes<br>
c) 8 bytes<br>
d) Depends on compiler<br>
b<br>

## Sample Output
*********WELCOME TO C++ QUIZ*********
Enter the number of questions you want to attempt (5 or 10): 5<br>

Question 1: What is the size of int in C++?<br>
a)2bytes<br>
b)4bytes<br>
c)8bytes<br>
d)Depends on compiler<br>  
Enter your answer (a/b/c/d): b<br>

Question 2: Which of the following is a valid variable name?<br>
a)1stVariable<br>  
b)variable-1 <br> 
c)variable_1 <br> 
d)variable 1 <br> 
Enter your answer (a/b/c/d): c<br>

Question 3: What is the output of:  int x = 5;  cout << x++;<br>  
a)Compilation error<br>  
b)6<br>  
c)5<br> 
d)Runtime error<br>  
Enter your answer (a/b/c/d): c<br>

Question 4: Which keyword is used to declare a constant?<br>
a)const<br>  
b)static<br>  
c)final<br>  
d)immutable<br>  
Enter your answer (a/b/c/d): a<br>

Question 5: What is the purpose of the 'new' keyword?<br>
a)Define a new function<br>  
b)Declare a new variable<br>  
c)Create a class<br>  
d)Allocate memory dynamically<br>  
Enter your answer (a/b/c/d): d<br>

===== QUIZ COMPLETED! =====<br>
Your final score is: 50/50  
