//converting a letter to its uppercase or lowercase equivalent
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if (isalpha(letter))
        {
        char uppercaseLetter = toupper(letter);
        cout << "Uppercase equivalent: " << uppercaseLetter << endl;

        char lowercaseLetter = tolower(letter);
        cout << "Lowercase equivalent: " << lowercaseLetter << endl;
    } else {
        cout << "Invalid input. Please enter a letter." << endl;
    }

    return 0;
}

