#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxNames = 100;
    char names[maxNames][100];

    int numberOfNames;

    cout << "Enter the number of persons: ";
    cin >> numberOfNames;
    cin.ignore(); 

    for (int i = 0; i < numberOfNames; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        cin.getline(names[i], sizeof(names[i]));
    }

    for (int i = 0; i < numberOfNames - 1; ++i) {
        for (int j = i + 1; j < numberOfNames; ++j) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < numberOfNames; ++i) {
        cout << names[i] << endl;
    }

    return 0;
}
