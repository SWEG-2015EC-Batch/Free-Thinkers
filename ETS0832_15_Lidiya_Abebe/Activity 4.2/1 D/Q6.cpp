#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
  
    double totalMarks;
    cout << "Enter the total marks: ";
    cin >> totalMarks;

    string scoreLevel;
    if (totalMarks >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMarks >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMarks >= 50) {
        scoreLevel = "Fair";
    } else if (totalMarks >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }

    cout << setw(15) << "Total Marks" << setw(15) << "Score Level" << endl;
    cout << setw(15) << totalMarks << setw(15) << scoreLevel << endl;

    return 0;
}
