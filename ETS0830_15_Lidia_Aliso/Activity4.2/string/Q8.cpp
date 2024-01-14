/*Write an application that inputs a line of text and outputs the text twice, once in all uppercase
and once in all lowercase letters.*/
#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main() {
    string input;
    
    cout << "Enter a line of text: ";
    getline(cin, input);
    
    // Convert to uppercase
    locale loc;
    for (char& c : input) {
        c = toupper(c, loc);
    }
    
    cout << "Uppercase: " << input << endl;
    
    // Convert to lowercase
    for (char& c : input) {
        c = tolower(c, loc);
    }
    
    cout << "Lowercase: " << input << endl;
    
    return 0;
}
