#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string inputString;

   cout << "Enter a string: ";
    getline(std::cin, inputString);

    int vowelCount = 0;
    int consonantCount = 0;

    for (char character : inputString) {

        if (isalpha(character)) {

            char lowercaseChar = tolower(character);

            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
                lowercaseChar == 'o' || lowercaseChar == 'u') {
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        }
    }

    cout << "Number of vowels: " << vowelCount <<endl;
    cout << "Number of consonants: " << consonantCount <<endl;

    return 0;
}
