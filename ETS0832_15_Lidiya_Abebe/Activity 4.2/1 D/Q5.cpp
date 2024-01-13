#include <iostream>
#include <iomanip>  

using namespace std;

const int size = 9; 

int main() {
 
    double volts[size] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "Data in three columns:" << endl;
    
    for (int i = 0; i < size; ++i) {
        cout << setw(8) << volts[i];

        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    return 0;
}
