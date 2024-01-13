#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    for (char &ch : word) {
        ch = tolower(ch);
    }

    int i = 0;
    int j = word.length() - 1;

    bool isPalindrome = true;
    while (i < j) {
        if (word[i] != word[j]) {
            isPalindrome = false;
            break;
        }
        ++i;
        --j;
    }

    if (isPalindrome) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}
