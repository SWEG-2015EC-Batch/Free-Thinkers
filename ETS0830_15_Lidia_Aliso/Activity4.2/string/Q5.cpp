//Write a program that find the frequency of vowel, consonant, digit and special character
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    for (char character : input) {
        if (isalpha(character)) {
            char lowercaseChar = tolower(character); // Convert to lowercase for easier comparison
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(character)) {
            digits++;
        } else if (ispunct(character) || isspace(character)) {
            specialChars++;
        }
    }

    cout << "Frequency of Vowels: " << vowels << std::endl;
    cout << "Frequency of Consonants: " << consonants << std::endl;
    cout << "Frequency of Digits: " << digits << std::endl;
    cout << "Frequency of Special Characters: " << specialChars << std::endl;

    return 0;
}
