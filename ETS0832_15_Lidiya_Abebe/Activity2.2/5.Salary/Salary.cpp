#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string employeeName;
    double weeklyWorkingHours, bonusRate, baseSalary;

    // Get input from the user
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;

    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Constants for pension rate and tax rate
    const double pensionRate = 0.05;  // 5%
    const double taxRate = 0.15;      // 15%

    // Calculate gross salary, bonus payment, pension, and net salary
    double grossSalary = baseSalary + (weeklyWorkingHours * bonusRate);
    double bonusPayment = weeklyWorkingHours * bonusRate;
    double pensionDeduction = grossSalary * pensionRate;
    double taxDeduction = grossSalary * taxRate;
    double netSalary = grossSalary - pensionDeduction - taxDeduction;

    // Display the results
    cout << "\nEmployee: " << employeeName << endl;
    cout << "Gross Salary: birr" << grossSalary << endl;
    cout << "Bonus Payment: birr" << bonusPayment << endl;
    cout << "Pension Deduction: birr" << pensionDeduction << endl;
    cout << "Tax Deduction: birr" << taxDeduction << endl;
    cout << "Net Salary: birr" << netSalary << endl;

    return 0;
}

