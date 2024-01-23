#include <iostream>
using namespace std;

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};

    // Print array elements using pointers for 1D array (balance)
    cout << "Array elements using pointers for 1D array (balance):" << endl;
    double* balancePtr = balance;
    for (int i = 0; i < 5; i++) {
        cout << "balance[" << i << "] value: " << *balancePtr << endl;
        balancePtr++;
    }

    // Print array elements using pointers for 2D array (arr)
    cout << "\nArray elements using pointers for 2D array (arr):" << endl;
    int* arrPtr = *arr; // Pointer to the first element of 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "arr[" << i << "][" << j << "] value: " << *arrPtr << endl;
            arrPtr++;
        }
    }

    return 0;
}
