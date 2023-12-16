#include <iostream>
using namespace std;
int main() {
    for (int i = 10; i <= 49; ++i) {
        cout << i << " ";
        
        // Move to the next line after every 10 numbers
        if (i % 10 == 9 || i == 49) {
            cout <<endl;
        }
    }

    return 0;
}
