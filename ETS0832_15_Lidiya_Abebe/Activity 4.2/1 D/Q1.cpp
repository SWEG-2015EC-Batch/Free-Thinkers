#include <iostream>
using namespace std;
int main() {

    int data[] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};
    int array_4x5[4][5];

    int index = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            array_4x5[i][j] = data[index++];
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << array_4x5[i][j] << " ";
        }
       cout << std::endl;
    }

    return 0;
}

