 #include <iostream>
 using namespace std;
 int main(){
     int rows = 6; 
  //for inverted pyramid
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
             cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl;
    }
        cout << endl;
    // for hollow full pyramid
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            if (k == 1 || k == i || i == rows) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
 }