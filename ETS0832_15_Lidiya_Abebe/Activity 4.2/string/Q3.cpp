#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    string resultString = "";
    for (char character : inputString) {
        if (isalpha(character)) {
            resultString += character;
        }
    }

    cout << "String after removing non-alphabet characters: " << resultString << endl;

    return 0;
}
