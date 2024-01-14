/*Design a program to find the frequency of characters within string and display character with
largest and smallest frequency respectively.*/
#include <iostream>
#include <string>
#include <climits> 
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int charFrequency[26] = {0}; 

    for (char character : input) {
        if (isalpha(character)) {
            charFrequency[tolower(character) - 'a']++;
        }
    }
    char maxFreqChar = ' ';
    char minFreqChar = ' ';
    int maxFrequency = 0;
    int minFrequency = INT_MAX;

    for (int i = 0; i < 26; ++i) {
        if (charFrequency[i] > maxFrequency) {
            maxFreqChar = static_cast<char>(i + 'a');
            maxFrequency = charFrequency[i];
        }

        if (charFrequency[i] < minFrequency && charFrequency[i] > 0) {
            minFreqChar = static_cast<char>(i + 'a');
            minFrequency = charFrequency[i];
        }
    }
    cout << "Character Frequency:\n";
    for (int i = 0; i < 26; ++i) {
        if (charFrequency[i] > 0) {
            cout << static_cast<char>(i + 'a') << ": " << charFrequency[i] << endl;
        }
    }
    cout << "Character with the largest frequency: " << maxFreqChar << " (Frequency: " << maxFrequency << ")\n";
    cout << "Character with the smallest frequency: " << minFreqChar << " (Frequency: " << minFrequency << ")\n";

    return 0;
}
