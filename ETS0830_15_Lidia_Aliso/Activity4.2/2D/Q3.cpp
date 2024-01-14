/*a program to store exam scores (test, assignment, quiz, project and final). The
program should determine and print the score level alongside with the total mark in tabular
format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor
and <40 Fail.*/#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    const int numComponents = 5; // Number of components (test, assignment, quiz, project, final)

    for (int studentIndex = 1; studentIndex <= numStudents; ++studentIndex) {
        int totalMark = 0;

    
        string componentNames[numComponents] = {"Test", "Assignment", "Quiz", "Project", "Final"};
        int componentScores[numComponents];

        
        for (int i = 0; i < numComponents; ++i) {
            cout << "Enter " << componentNames[i] << " score for Student #" << studentIndex << ": ";
            cin >> componentScores[i];
            totalMark += componentScores[i];
        }

        
        string scoreLevel;
        if (totalMark >= 80) {
            scoreLevel = "Excellent";
        } else if (totalMark >= 60) {
            scoreLevel = "Very Good";
        } else if (totalMark >= 50) {
            scoreLevel = "Fair";
        } else if (totalMark >= 40) {
            scoreLevel = "Poor";
        } else {
            scoreLevel = "Fail";
        }

        
        cout << "\nStudent #" << studentIndex << " Summary:" << endl;
        cout << left << setw(15) << "Component";
        cout << left << setw(10) << "Score" << endl;
        cout << "------------------------------------" << endl;
        for (int i = 0; i < numComponents; ++i) {
            cout << left << setw(15) << componentNames[i];
            cout << left << setw(10) << componentScores[i] << endl;
        }
        cout << "------------------------------------" << endl;
        cout << left << setw(15) << "Total Mark";
        cout << left << setw(10) << totalMark << endl;
        cout << "------------------------------------" << endl;
        cout << "Score Level: " << scoreLevel << "\n" << endl;
    }

    return 0;
}
