#include <iostream>

using namespace std;

const int size = 8;  

int main() {

    int first[size];
    cout << "Enter " << size << " integer numbers for the first array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> first[i];
    }

    int second[size];
    cout << "\nEnter " << size << " integer numbers for the second array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> second[i];
    }
  
    int result[size];

    for (int i = 0; i < size; ++i) {
        result[i] = first[i] + second[i];
    }

    cout << "\nResulting array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
