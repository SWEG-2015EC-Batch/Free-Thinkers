#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double test, assignment, quiz, project, final_exam;

    cout << "Enter test score: ";
    cin >> test;

    cout << "Enter assignment score: ";
    cin >> assignment;

    cout << "Enter quiz score: ";
    cin >> quiz;

    cout << "Enter project score: ";
    cin >> project;

    cout << "Enter final exam score: ";
    cin >> final_exam;

    double total_mark = test + assignment + quiz + project + final_exam;

    // Determine score level
    string score_level;
    if (total_mark >= 80) {
        score_level = "Excellent";
    } else if (total_mark >= 60) {
        score_level = "Very Good";
    } else if (total_mark >= 50) {
        score_level = "Fair";
    } else if (total_mark >= 40) {
        score_level = "Poor";
    } else {
        score_level = "Fail";
    }

    cout << setw(20) << "Category" << setw(15) << "Score" << endl;
    cout << setw(20) << "Test" << setw(15) << test << endl;
    cout << setw(20) << "Assignment" << setw(15) << assignment << endl;
    cout << setw(20) << "Quiz" << setw(15) << quiz << endl;
    cout << setw(20) << "Project" << setw(15) << project << endl;
    cout << setw(20) << "Final Exam" << setw(15) << final_exam << endl;
    cout << setw(20) << "Total Mark" << setw(15) << total_mark << endl;
    cout << setw(20) << "Score Level" << setw(15) << score_level << endl;

    return 0;
}
