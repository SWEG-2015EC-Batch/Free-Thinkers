#include <iostream>
using namespace std;

int main() {
    double mark;

    cout << "Enter the mark for the course: ";
    cin >> mark;

    if (mark >= 90) {
        cout << "Mark Grade: A+" << endl;
    } else if (mark >= 80) {
        cout << "Mark Grade: A" << endl;
    } else if (mark >= 75) {
        cout << "Mark Grade: B+" << endl;
    } else if (mark >= 60) {
        cout << "Mark Grade: B" << endl;
    } else if (mark >= 55) {
        cout << "Mark Grade: C+" << endl;
    } else if (mark >= 45) {
        cout << "Mark Grade: C" << endl;  
    } else if (mark >= 30) {
        cout << "Mark Grade: D" << endl;
    } else {
        cout << "Mark Grade: F" << endl;   
    }

    return 0;
}

