//Write a program to remove non-alphabet character from string
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result;
    for (char c : input) {
        if (isalpha(c)) {
            result += c;
        }
    }

    cout << "String with only alphabet characters: " << result << endl;

    return 0;
}
