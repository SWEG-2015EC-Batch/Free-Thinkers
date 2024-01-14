/*Write an application that inputs a line of text, and tokenizes it. Use space characters as
delimiters.*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    stringstream ss(input);
    string token;

    cout << "Tokens: ";

    while (ss >> token) {
        cout << token << " ";
    }

    return 0;
}
