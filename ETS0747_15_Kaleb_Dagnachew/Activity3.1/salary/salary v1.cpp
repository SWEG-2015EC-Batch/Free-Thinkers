#include <iostream>

using namespace std;

int main()
{

        float net_pay, gross_salary, worked_hours, income_tax_rate, over_time_bonus_ratePHour, bonus_payment, income_tax, pension; //declaring all variables

        //Reading values
        cout << "Enter your gross salary: ";
        cin >> gross_salary;
        cout << "Enter your worked hours: ";
        cin >> worked_hours;

        //calculating the overtime bonus rate
        if(worked_hours > 40) {
            //entering the overtime bonus rate
            cout << "Enter the overtime bonus rate per hour: ";
            cin >> over_time_bonus_ratePHour;

            //calculating the bonus payment
            bonus_payment = (worked_hours - 40) * over_time_bonus_ratePHour;
        }

        //calculating the pension and the income tax

        pension = gross_salary * (7/100);
        income_tax = gross_salary * income_tax_rate;
        net_pay = gross_salary - pension - income_tax + bonus_payment;
        cout << "\nyour net Payment after paying your tax and pension will be: " << net_pay << "Birr" << endl;

    return 0;
}
