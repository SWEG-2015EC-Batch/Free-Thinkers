#include <iostream>
#include <cmath> // for pow function
using namespace std;

int main() {
    // Declare variables to store the base (x) and exponent (y)
    double x, y;

    // Get user input for the base (x)
    cout << "Enter the base (x): ";
    cin >> x;

    // Get user input for the exponent (y)
    cout << "Enter the exponent (y): ";
    cin >> y;

    // Calculate the result using the pow function
    double result = pow(x, y);

    // Display the result
    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}

