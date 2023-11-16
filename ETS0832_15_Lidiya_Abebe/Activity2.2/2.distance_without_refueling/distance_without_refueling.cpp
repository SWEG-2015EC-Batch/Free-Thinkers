//calculating the miles traveled by automobile without refueling
#include <iostream>
using namespace std;

int main()
{
    float tankCapacity, milesPerGallon;

    cout << "Enter the fuel tank capacity in gallons: ";
    cin >> tankCapacity;

    cout << "Enter the miles per gallon: ";
    cin >> milesPerGallon;

    float milesWithoutRefueling = tankCapacity * milesPerGallon;

    cout << "The automobile can be driven approximately " << milesWithoutRefueling << " miles without refueling." << endl;

    return 0;
}
