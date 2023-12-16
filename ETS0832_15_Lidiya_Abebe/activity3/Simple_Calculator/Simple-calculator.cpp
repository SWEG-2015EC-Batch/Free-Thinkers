#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;

    do {
        cout << "Enter operator (+, -, *, /) or 0 to exit: ";
        cin >> op;

        if (op == '0') {
            cout << "Exit" << endl;
            break;
        }

        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error" << endl;
                    continue;  
                }
                break;
            default:
                cout << "Error" << endl;
                continue;  }

        cout << "Result: " << result << endl;

    } while (true);

    return 0;
}
