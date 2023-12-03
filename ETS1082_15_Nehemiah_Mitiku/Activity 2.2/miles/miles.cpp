#include <iostream>
using namespace std;
int main()
{
    float capacity, mpg;
    cout << "Enter the capacity of your fuel tank in gallon: ";
    cin >> capacity;
    cout << "Enter the number of miles your vehicle runs per gallon: ";
    cin >> mpg;
    float miles = capacity * mpg;
    cout << "You can drive " << miles << " miles without the need for a refill.";
    return 0;
}
