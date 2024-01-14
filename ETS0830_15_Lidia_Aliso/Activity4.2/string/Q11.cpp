/*Write a program that asks the user for its first, middle and last name and then prints the
user’s initials on-screen by printing the first character of each name.*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName, middleName, lastName;

    // Ask for user's first name
    cout << "Enter your first name: ";
    cin >> firstName;

    // Ask for user's middle name
    cout << "Enter your middle name: ";
    cin >> middleName;

    // Ask for user's last name
    cout << "Enter your last name: ";
    cin >> lastName;

    // Print initials
    cout << "Your initials are: " << firstName[0] << middleName[0] << lastName[0] << endl;

    return 0;
}
