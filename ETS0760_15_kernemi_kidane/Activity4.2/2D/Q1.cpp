#include <iostream>
using namespace std;
int main(){
    int array1[5];//5 can change accord to data
    int array2[5];
 cout << "Enter elements for the first array:\n";
    for (int i = 0; i <5 ; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i];
    }
cout << "Enter elements for the second array:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array2[i];
    }
bool identical=true;
for(int i = 0; i < 5; ++i){
    if (array1[i] != array2[i]) {
            identical = false;
            break;
}
}
if(identical){
    cout<<"the arrays are identical";
}else{
    cout<<"the arrays are not identical";
}
return 0;
}
