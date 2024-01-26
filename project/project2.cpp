//print pattern

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer : ";
    cin>>n;
    if (n < 1) {
         cout << "Error, enter a positive integer\n";
        return 1;
         }

 //for the upper part
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << j << " ";
          }

        for (int k = 0; k < 2 * (n - i); ++k) {
            cout << "  ";
         }

        for (int l=i; l>=0; --l) {
            if(i==n &&l==i){
                cout<<"  ";
             }else{cout << l << " ";
              }
         }
        cout <<endl;
    }
//for the flipped part
for (int i = n; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            cout << j << " ";
        }

        for (int k = 0; k < 2 * (n - i); ++k) {
            cout << "  ";
        }

        for (int l =i; l >= 0; --l) {
            if (i == n && l == i) {
                cout << "  ";
            } else {
                cout << l << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


