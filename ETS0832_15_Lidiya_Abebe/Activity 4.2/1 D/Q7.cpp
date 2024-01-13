#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> numbers;

    cout << "Enter a list of numbers. Enter a non-integer to stop:" << endl;

    int input;
    while (cin >> input) {
        numbers.push_back(input);
    }

    cout << "\nEven numbers in reverse order:" << endl;
    for (int i = numbers.size() - 1; i >= 0; --i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
