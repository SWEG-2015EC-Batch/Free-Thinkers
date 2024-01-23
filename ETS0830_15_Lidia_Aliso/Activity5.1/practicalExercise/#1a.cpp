#include <iostream>
using namespace std;

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};

    // Print addresses of elements in 1D array
    cout << "Addresses of elements in 1D array (balance):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "balance[" << i << "] address: " << &balance[i] << endl;
    }

    // Print addresses of elements in 2D array
    cout << "\nAddresses of elements in 2D array (arr):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "arr[" << i << "][" << j << "] address: " << &arr[i][j] << endl;
        }
    }

    return 0;
}
