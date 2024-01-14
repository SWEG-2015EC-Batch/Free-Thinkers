/*a program that store an answer sheet for a test containing 10 multiple choice
questions. The program should accept the student answer, and print the test score along with
the marked student answer.*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string answerKey = "ABCDABCDAB";

    string studentAnswers;

    cout << "Enter your answers (A/B/C/D) for the 10 questions: ";
    cin >> studentAnswers;

    int score = 0;
    string markedAnswers;
    for (int i = 0; i < 10; i++) {
        if (studentAnswers[i] == answerKey[i]) {
            score++;
            markedAnswers += "+"; 
        } else {
            markedAnswers += "-";
        }
    }

    cout << "Test Score: " << score << "/10" << endl;
    cout << "Marked Answers: " << markedAnswers << endl;

    return 0;
}
