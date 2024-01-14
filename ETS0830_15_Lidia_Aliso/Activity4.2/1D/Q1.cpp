/*a program to declare a 4-by-5 array of integers and initialize with the data 16, 22, 99, 4, 18, -258, 4,
101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, and 3.*/
#include <iostream>
using namespace std;
int main() {
    //Declare a 4x5 array of integers.
    int array[4][5] = {
        { -258, 105, 101, 45, 98},  
        { 16 ,  22,  72 , 99, 18},
        { 33,   88,  15 , 16, 4},
        { 4 ,   6 ,  3 ,  2 , 5 }
        
    };  

    // Print the contents of the array
    cout << "Array Contents:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

    

