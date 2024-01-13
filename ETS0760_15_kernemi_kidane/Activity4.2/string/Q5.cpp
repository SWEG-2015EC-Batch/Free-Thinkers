#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0, digits = 0, specials = 0;

    for (char character : input) {
        if (isalpha(character)) {
            char lowerChar = tolower(character);
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(character)) {
            digits++;
        } else {
            specials++;
        }
    }

    cout << "Frequency of vowels: " << vowels << endl;
    cout << "Frequency of consonants: " << consonants << endl;
    cout << "Frequency of digits: " << digits << endl;
    cout << "Frequency of special characters: " << specials << endl;

    return 0;
}
