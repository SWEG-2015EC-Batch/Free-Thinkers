/* a C++ program that read and adds equivalent elements of the two-dimensional arrays named first
and second. The program should print the resulting data elements in table form.
*/
#include <iostream>
using namespace std;
int main() {
    int first[3][4];
    int second[3][4];

    cout << "Enter values for the first array:" <<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
        cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
        cin >> first[i][j];
        }
    }

    cout << "\nEnter values for the second array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> second[i][j];
        }
    }

    cout << "\nResulting array after addition:" <<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << first[i][j] + second[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
