/*a program that checks whether two one dimensional arrays of the same size are
identical (have the same elements) or not.*/
#include <iostream>
using namespace std;
bool checkArraysIdentical(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int arr1[size];
    int arr2[size];

     cout<< "Enter the elements of the first array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    bool areIdentical = checkArraysIdentical(arr1, arr2, size);

    if (areIdentical) {
        cout << "The arrays are identical." << endl;
    } else {
        cout << "The arrays are not identical." << endl;
    }

    return 0;
}
