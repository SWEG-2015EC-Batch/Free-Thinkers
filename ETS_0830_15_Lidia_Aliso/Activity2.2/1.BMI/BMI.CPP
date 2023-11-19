//calculate the BMI
#include <iostream>

using namespace std;

int main()
{
    double weight, height, BMI;
    cout << "enter weight in kilogram" ;
    cin>>weight;
    cout << "enter height in meter" ;
    cin>> height;
    BMI=weight/height*height;
    cout<< BMI;
    return 0;
}
