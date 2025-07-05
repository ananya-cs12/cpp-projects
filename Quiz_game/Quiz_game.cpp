#include<iostream>
#include<fstream>
using namespace std;

// Structure to store one quiz question and its options
struct Question {
    string question;
    string optionA;
    string optionB;
    string optionC;
    string optionD;
    char answer;// correct option (a/b/c/d)
};

int main() {
    Question quiz[10];// Array to store up to 10 questions
    ifstream F1("QuizSheet.txt"); // Open the quiz file

    int n;
    cout << "Enter the number of questions you want to attempt (5 or 10): ";
    cin >> n;
    cin.ignore();  //Clears leftover newline after number input

    int score = 0;
     // Loop to read questions from file and ask the user
    for(int i = 0; i < n; i++) {
        // Read question and options from the file
        getline(F1, quiz[i].question);
        getline(F1, quiz[i].optionA);
        getline(F1, quiz[i].optionB);
        getline(F1, quiz[i].optionC);
        getline(F1, quiz[i].optionD);
        F1 >> quiz[i].answer;
        F1.ignore(); // Clear newline after reading the answer
        
        // Display the question and options
        cout << "\nQuestion " << (i + 1) << ": " << quiz[i].question << endl;
        cout << quiz[i].optionA << endl;
        cout << quiz[i].optionB << endl;   
        cout << quiz[i].optionC << endl;
        cout << quiz[i].optionD << endl;

        // Take user input
        cout << "Enter your answer (a/b/c/d): ";
        char urAnswer;
        cin >> urAnswer;

        if(urAnswer == quiz[i].answer) {
            score += 10;
        }
    }

    F1.close();

   cout << "\n===== QUIZ COMPLETED! =====" << endl;
   cout << "Your final score is: " << score << "/" << (n * 10) << endl;


    return 0;
}
