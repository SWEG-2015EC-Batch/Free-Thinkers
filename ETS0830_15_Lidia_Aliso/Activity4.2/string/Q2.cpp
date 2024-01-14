//Design a program to check either the word is palindrome or not using loop.
#include <iostream>
#include <string>

bool isPalindrome(string word) {
    int length = word.length();
    
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    if (isPalindrome(word)) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
    
    return 0;
}
