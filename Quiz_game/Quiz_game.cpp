#include<iostream>
#include<fstream>
using namespace std;

struct Question {
    string question;
    string optionA;
    string optionB;
    string optionC;
    string optionD;
    char answer;
};

int main() {
    Question quiz[10];
    ifstream F1("QuizSheet.txt");

    int n;
    cout << "Enter the number of questions you want to attempt (5 or 10): ";
    cin >> n;
    cin.ignore();  //Clears leftover newline after number input

    int score = 0;
    for(int i = 0; i < n; i++) {
        getline(F1, quiz[i].question);
        getline(F1, quiz[i].optionA);
        getline(F1, quiz[i].optionB);
        getline(F1, quiz[i].optionC);
        getline(F1, quiz[i].optionD);
        F1 >> quiz[i].answer;
        F1.ignore(); // Clear newline after reading the answer

        cout << "\nQuestion " << (i + 1) << ": " << quiz[i].question << endl;
        cout << quiz[i].optionA << endl;
        cout << quiz[i].optionB << endl;   
        cout << quiz[i].optionC << endl;
        cout << quiz[i].optionD << endl;
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
