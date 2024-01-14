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
