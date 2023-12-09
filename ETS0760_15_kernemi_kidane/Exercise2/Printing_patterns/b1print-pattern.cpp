#include <iostream>
using namespace std;
int main() {
    // for rectangle
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 7; ++j) {
        cout << "* ";
        }
        cout <<endl;
    }
    cout <<endl;
    // for hollow rectangle
 for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (i == 0 || i == 6) {
                cout << "* ";
            }
            else if (j == 0 || j == 7) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
       cout << endl;
    }
        cout << endl;
    //for half pyramid
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
          cout << "* ";
        }
        cout << endl;
    }
        cout<< endl;
    // for inverted half pyramid
    for (int i = 6; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout <<endl;
    }
      cout <<endl;
    // for hollow inverted half pyramid
    for (int i = 6; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == 6 || i == 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
       cout <<endl;
    // for full pyramid
    int rows = 6;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
       cout << endl;
    }
    return 0;
}   