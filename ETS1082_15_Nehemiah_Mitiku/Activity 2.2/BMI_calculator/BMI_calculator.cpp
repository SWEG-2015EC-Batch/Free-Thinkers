#include <iostream>
using namespace std;

int main()
{
    double weight, height;
    cout << "Enter your weight (in killograms): ";
    cin >> weight;
    cout << "Enter your height (in meters): ";
    cin >> height;
    double bmi = weight/(height*height);
    cout << "Your BMI is " << bmi;
    return 0;
}
