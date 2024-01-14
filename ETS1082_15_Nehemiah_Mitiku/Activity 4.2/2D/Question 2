#include <iostream>
using namespace std;
int main(){
   int sample[5][5];//5 can be change accord to data
   for(int i=0;i<5;++i){
     for(int j=0;j<5;++j){
    cout<<"enter the "<<i+1<<" row and "<<j+1<<" coloumn number: ";
    cin>>sample[i][j];
     }
     }
     cout << "Multiplication of row elements:\n";
    for (int i = 0; i <5; ++i) {
        int rowProduct = 1;
        for (int j = 0; j <5; ++j) {
            rowProduct *= sample[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowProduct << "\n";
    }
     cout << "Sum of column elements:\n";
    for (int j = 0; j <5; ++j) {
        int colSum = 0;
        for (int i = 0; i <5; ++i) {
            colSum += sample[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << "\n";
    }
     return 0;
}
   
