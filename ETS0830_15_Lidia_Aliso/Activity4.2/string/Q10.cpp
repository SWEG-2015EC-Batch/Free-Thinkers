/*Write a program that stores a password in a character array called pass. The program then
ask users for the password and check whether they typed the proper password or not.*/
#include <iostream>
#include <cstring> // For strcmp function
using namespace std;
int main() {
    const int maxLength = 20; // Maximum length for the password
    char storedPassword[maxLength] = "securePassword"; // Set your desired password

    char userPassword[maxLength];

    // Ask the user to input the password
    cout << "Enter the password: ";
    cin.getline(userPassword, maxLength);

    // Check if the input password matches the stored password
    if (strcmp(userPassword, storedPassword) == 0) {
        cout << "Login successful. Welcome!" << endl;
    } else {
        cout << "Incorrect password. Access denied." << endl;
    }

    return 0;
}
