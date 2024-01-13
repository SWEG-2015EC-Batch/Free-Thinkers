#include<iostream>
using namespace std;

const int rows = 2;
const int columns = 2;

int main() {
  int array1[rows][columns] = {{10, 29}, {39, 40}};
  int array2[rows][columns] = {{10, 29}, {39, 4}};
  int count = 0;

  int size1 = rows * columns;

  if (size1 == rows * columns) {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        if (array1[i][j] == array2[i][j]) {
          count++;
        }
      }
    }

    if (count == size1) {
      cout << "They are identical";
    } else {
      cout << "They are not identical";
    }
  } else {
    cout << "Arrays are of different sizes. They cannot be identical.";
  }

  return 0;
}
