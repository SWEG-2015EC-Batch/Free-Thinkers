#include <iostream>
using namespace std;

int main()
{
    int choice;
    do{

        float operation, num1, num2;
        char opr;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter an operator(+, *, -, /): ";
        cin >> opr;

        switch(opr) {
        case '+':
            operation = num1 + num2;
            cout << "\nThe sum is " << operation;
            break;
        case '-':
            operation = num1 - num2;
            cout << "\nThe difference is " << operation;
            break;
        case '/':
            operation = num1 / num2;
            cout << "\nThe quotient is " << operation;
            break;
        case '*':
            operation = num1 * num2;
            cout << "\nThe product is " << operation;
            break;
        default:
            cout << "\nYou have entered an invalid operator" << endl;
        }
        cout << "\n\nEnter 0 to stop or any number to continue: ";
        cin >> choice;
        cout << "\n";
    }while(choice != 0);

    return 0;
}

