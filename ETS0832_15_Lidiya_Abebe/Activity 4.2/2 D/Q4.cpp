#include <iostream>
using namespace std;
int main() {
    const int rows = 3;
    const int cols = 4;

    int array[rows][cols];

   cout << "Enter elements for the 3x4 array:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
           cin >> array[i][j];
        }
    }

    int sumEven = 0;

    cout << "Array with even elements marked by '*':" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] % 2 == 0) {
                cout << array[i][j] << "\t";
                sumEven += array[i][j];
            } else {
             cout << "*\t";
            }
        }
cout << endl;
    }

    cout << "Sum of even elements: " << sumEven <<endl;

    return 0;
}
