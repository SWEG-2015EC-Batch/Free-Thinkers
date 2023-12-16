#include <iostream>
 using namespace std;
 int main(){
    // number in rectangle
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
           cout << j << " ";
        }
        cout << endl;
    }
     cout << endl;
    // number in triangle
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
       cout << endl;
    }
        cout << endl;
    // flipped version of number in triangle
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5 - i; ++j) {
            cout << "  ";
        }
        for (int k = i; k >= 1; --k) {
            cout << k << " ";
        }
        cout << endl;
    }
        cout<< endl;
    // abcde in rectangle
    for (int i = 1; i <= 5; ++i) {
        for (char ch = 'a'; ch <= 'e'; ++ch) {
            cout << ch << " ";
        }
       cout <<endl;
    }
       cout <<endl;
    //ABCDE in triangle
    for (int i = 1; i <= 5; ++i) {
        char ch = 'A';
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
            ++ch;
        }
        cout << endl;
    }
        cout << endl;
    //A-X in rectangle
    char ch = 'A';
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 6; ++j) {
            cout << ch << " ";
            ++ch;
        }
       cout << endl;
    }

    return 0;
}

 
