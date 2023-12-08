#include <iostream>
using namespace std;

int main() {
    double test, quiz, project, assignment, finalExam,totalMark;

    cout << "Enter the Test mark(out of 15): ";
    cin >> test;

    cout << "Enter the Quiz mark(out of 5): ";
    cin >> quiz;

    cout << "Enter the Project mark(out of 20): ";
    cin >> project;

    cout << "Enter the Assignment mark(out of 10): ";
    cin >> assignment;

    cout << "Enter the Final Exam mark(out of 50): ";
    cin >> finalExam;

     totalMark = test + quiz + project + assignment + finalExam;

    if (totalMark >= 90) {
        cout << "Total Mark: " << totalMark << " and Mark Grade: A+" << endl;
    } else if (totalMark >= 80) {
        cout << "Total Mark: " << totalMark << " and Mark Grade: A" << endl;
    } else if (totalMark >= 75) {
        cout << "Total Mark: " << totalMark << " and Mark Grade: B+" << endl;
    } else if (totalMark >= 60) {
        cout << "Total Mark: " << totalMark << " and Mark Grade: B" << endl;
    } else if (totalMark >= 55) {
        cout << "Total Mark: " << totalMark << " and Mark Grade: C+" << endl;
    } else if (totalMark >= 45) {
        cout << "Total Mark: " << totalMark << " and Mark Grade: C" << endl;
    } else if (totalMark >= 30) {
        cout << "Total Mark: " << totalMark << " and Mark Grade: D" << endl;
    } else {
        cout << "Total Mark: " << totalMark << " and Mark Grade: F" << endl;
    }

    return 0;
}
