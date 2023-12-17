#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


void printRevers() {
    int number, reverses = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;
    while (number != 0) { // let number = 123
        remainder = number % 10; // remainder = 123 % 10 = 3
        reverses = reverses * 10 + remainder; // reverse = 0 * 10 + 3 = 3
        number /= 10; // number = 123 / 10 = 12
    }
    cout << "Reversed number: " << reverses << endl;
}
void countDigits() {

    int number, counts;
    cout << "Enter a number: ";
    cin >> number; // let number = 12549
    for (counts = 0; number != 0; counts++) {
        number /= 10;   // 1st iteration number = 12549 / 10 = 1254,
                        // 2nd iteration number = 1254 / 10 = 125,
                        // 3rd iteration number = 125 / 10 = 12,
                        // 4th iteration number = 12 / 10 = 1,
                        // 5th iteration number = 1 / 10 = 0
                        // print the number of iterations or count
    }
    cout << "Number of digits: " << counts << endl;
}
void sumDigits() {
        int number, sum = 0, remainder;
        cout << "Enter a number: ";
        cin >> number;
        while (number != 0) { // let number = 456
            remainder = number % 10; // remainder = 456 % 10 = 6 , second iteration: remainder = 45 % 10 = 5, third iteration: remainder = 4 % 10 = 4
            sum += remainder; // sum = 0 + 6 = 6 , second iteration: sum = 6 + 5 = 11, third iteration: sum = 11 + 4 = 15
            number /= 10; // number = 456 / 10 = 45 , second iteration: number = 45 / 10 = 4
        }
        cout << "Sum of digits: " << sum << endl;
}
void productDigit() {
        int n, product = 1;
        cout << "Enter a number: ";
        cin >> n; // let n = 123456
            while (n > 0) {
            int digit = n % 10; // get last digit = 6
            if (digit % 2 == 0) { // 6 % 2 == 0
                product *= digit; // product = 1 * 6 = 6
            }
                n /= 10; // n = 12345
            }
        cout << "Product of even digits: " << product << endl;
}
void printFnL() {

    int n ;
    cout << "Enter a number: ";
    cin >> n; // let n = -12549
    n = abs(n); // n = 12549
    int first = n ;
    while(first >= 10){ // 1st iteration first = 12549 / 10 = 1254,
                        // 2nd iteration first = 1254 / 10 = 125,
                        // 3rd iteration first = 125 / 10 = 12,
                        // 4th iteration first = 12 / 10 = 1, take this one after that it will be zero
                        // 5th iteration first = 1 / 10 = 0 , first less than 10
            first/= 10;
        }
    int last = n % 10;
    cout<< "First Digit: " << first << "\n"
        << "Last Digit: " << last << "\n"
        << "Sum: " <<first + last << endl;

}
void swapFnL() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Convert the number to a string
    string str = to_string(n);
    // Create a character array and copy the characters from the string
    char arr[str.length() + 1];
    copy(str.begin(), str.end(), arr);
    arr[str.length()] = '\0'; // null terminate the array
    // Swap the first and last elements of the array
    swap(arr[0], arr[str.length() - 1]);
    // Convert the array back to a string
    str = string(arr);
    // Convert the string back to an integer
    int swapped = stoi(str);
    cout << "Swapped: " << swapped << endl;
}
void palidrome() {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int reversed = 0;
        int temp = n; // temp is a copy of  n  and let n = 12321
        while(temp != 0) {
            reversed = reversed * 10 + temp % 10; // 1st iteration reversed = 0 * 10 + 12321 % 10 = 1
                                                  // 2nd iteration reversed = 1 * 10 + 1232 % 10 = 12
                                                  // 3rd iteration reversed = 12 * 10 + 123 % 10 = 123
                                                  // 4th iteration reversed = 123 * 10 + 12 % 10 = 1232
                                                  // 5th iteration reversed = 1232 * 10 + 1 % 10 = 12321
            temp /= 10;
        }
        if(reversed == n) // check if the reversed number is equal to the original number
            cout << "Palindrome" << endl;
        else
            cout << "Not Palindrome" << endl;

}
void frequency() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int frequency[10] = {0}; // initialize frequency array
    while(n > 0){
        int digit = n % 10;
        frequency[digit]++;
        n /= 10;
    }
    // Print table header
    cout << setw(10) << "Digit" << setw(10) << "Frequency" << endl;
    // Print table rows
    for(int i = 0; i < 10; i++){
        cout << setw(10) << i << setw(10) << frequency[i] << endl;
    }
}
void armstrong() {

// check if a number is armstrong or not
        int n, sum = 0, temp, remainder;
        cout << "Enter a number: ";
        cin >> n; // let n = 153
        temp = n;
        while (temp != 0){
            remainder = temp % 10; // 153 % 10 = 3 , second iteration 15 % 10 = 5 , third iteration 1 % 10 = 1
            sum += remainder * remainder * remainder; // 0 + 3*3*3 = 27, second iteration 27 + 5*5*5 = 152 , third iteration 152 + 1*1*1 = 153
            temp /= 10; // temp = 15  , second iteration temp = 1
        }
        if (sum == n) // 153 == 153
            cout << n << " is an Armstrong number.";
        else
            cout << n << " is not an Armstrong number.";

}
void strong() {
    int num, temp, rem, fact, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (num != 0){
        rem = num % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++){
            fact *= i;
        }
        sum += fact;
        num /= 10;
        }
    if (sum == temp){
        cout << temp << " is a strong number.";
    }
    else{
        cout << temp << " is not a strong number.";
    }
    // example of strong num

}
void perfect() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << n << " is a perfect number." << endl;
    }else{
        cout << n << " is not a perfect number." << endl;
    }
}
int main() {

    int choose;

    cout <<"!!!PLAYING WITH NUMBERS!!!!" << endl;
    cout << "\nPress\t1)To print numbers in reverse" << endl;
    cout << "\t2)To count the digits in a given number" << endl;
    cout << "\t3)To find the sum of the digits in the number" << endl;
    cout << "\t4)To find the product of even digits of the given number" << endl;
    cout << "\t5)To print the first and last digit of a number and find their sum"<< endl;
    cout << "\t6)To swap the first and last digit of the number "<< endl;
    cout << "\t7)To check whether a number is palindrome or not"<< endl;
    cout << "\t8)To find the frequency of each digit in a given integer and print table format"<< endl;
    cout << "\t9)To check if a number is Armstrong or not"<< endl;
    cout << "\t10)To check if a number is strong or not"<< endl;
    cout << "\t11)To check whether a number is perfect number or not"<< endl;

    cout << "\nEnter your choice: ";
    cin >> choose;

    switch (choose) {
    case 1:
        printRevers();
        break;
    case 2:
        countDigits();
        break;
    case 3:
        sumDigits();
        break;
    case 4:
        productDigit();
        break;
    case 5:
        printFnL();
        break;
    case 6:
        swapFnL();
        break;
    case 7:
        palidrome();
        break;
    case 8:
        frequency();
        break;
    case 9:
        armstrong();
        break;
    case 10:
        strong();
        break;
    case 11:
        perfect();
        break;
    default:
        cout << "You have enter a wrong choice pls try again latter!!!!!" << endl;
    }
    return 0;
}
