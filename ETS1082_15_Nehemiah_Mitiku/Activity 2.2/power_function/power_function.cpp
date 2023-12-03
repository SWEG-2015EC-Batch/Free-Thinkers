#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;
    int z = pow(x, y);
    cout << "Your answer is " << z;
    return 0;
}
