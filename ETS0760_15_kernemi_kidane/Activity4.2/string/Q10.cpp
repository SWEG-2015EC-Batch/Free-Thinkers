#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    const int maxPasswordLength = 20;
    char correctPassword[maxPasswordLength] = "SecretPassword";
    char userPassword[maxPasswordLength];

    cout << "Enter the password: ";
    cin.getline(userPassword, sizeof(userPassword));

    if (strcmp(userPassword, correctPassword) == 0) {
        cout << "Access granted! You entered the correct password." << endl;
    } else {
        cout << "Access denied! Incorrect password." << endl;
    }

    return 0;
}
