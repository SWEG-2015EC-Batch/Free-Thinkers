/*Suppose indices represent people and that the value at row i, column j of a 2D array is true
just in case i and j are friends and false otherwise. Initialize the 2D array to represent the
following configuration. Then the program counts how many pairs of friends are represented
in the array.*/
#include <iostream>
using namespace std;

const int size = 5; // You can change the size according to the number of people

int main() {
    bool friendship[5][5] = {
        {false, true, false, true, false},
        {true, false, true, false, false},
        {false, true, false, false, false},
        {true, false, false, false, true},
        {false, true, false, true, false}
    };

    cout << "Friendship Matrix:\n";
    cout << "   ";
    for (int i = 0; i < 5; ++i) {
        cout << i << "   ";
    }
    cout << "\n";
    cout << "-------------------------\n";
    for (int i = 0; i < 5; ++i) {
        cout << i << " |";
        for (int j = 0; j < 5; ++j) {
            if (friendship[i][j]) {
                cout << " *  ";
            } else {
                cout << "    ";
            }
        }
        cout << "\n";
    }

    int pairsCount = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (friendship[i][j]) {
                pairsCount++;
            }
        }
    }

    cout << "\nNumber of pairs of friends: " << pairsCount << "\n";

    return 0;
}
