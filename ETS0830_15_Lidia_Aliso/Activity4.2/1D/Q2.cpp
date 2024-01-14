/*a program to input eight integer numbers into an array named temp. As each number is input, add
the number into a total. After all numbers are input, display the number and their average.*/
#include <iostream>
using namespace std;
int main() {
    cout<<endl;
   int temp[8], total = 0;
    cout << "Please enter eight integer numbers:\n";
    for (int i = 0; i < 8; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp[i];
        total += temp[i]; 
    }
    double average = total / 8; 
    
    cout << "The numbers you entered are: ";
    for (int i = 0; i < 8; i++) {
        cout << temp[i];
        if (i < 8 - 1) {
            cout << ", ";
        }
    }
    cout << "\n";
    cout << "The total of the numbers is: " << total << "\n";
//we can use static_cast<double>before average When displaying the average,convert it to a floating-point number
    cout << "The average of the numbers is: " << static_cast<double>(average) << "\n"; 
    cout<<endl;
    return 0;
}
