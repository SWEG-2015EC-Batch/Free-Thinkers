#include <iostream>
using namespace std;

int main() {

    char c;
    cout << "Enter a character: ";
    cin >> c;

     if (c >= '0' && c <= '9') {
        cout << c << " is a digit." << endl;
        switch(c){
        case '0':
            cout << "0 is neither even or odd" << endl;
            break;
        case '2':
            cout << c << " is an even number" << endl;
            break;
        case '4':
            cout << c << " is an even number" << endl;
            break;
        case '6':
            cout << c << " is an even number" << endl;
            break;
        case '8':
            cout << c << " is an even number" << endl;
            break;
        default:
            cout << c << " is an odd number" << endl;

    }
    } else if (c >= 'A' && c <= 'Z') {
        cout << c << " is an uppercase letter." << endl;
        switch(c) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << c << " is a vowel letter." << endl;
            break;
        default:
            cout << c << " is a consonant letter." << endl;

        }
    } else if (c >= 'a' && c <= 'z') {
        cout << c << " is a lowercase letter." << endl;
        switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << c << " is a vowel letter." << endl;
            break;
        default:
            cout << c << " is a consonant letter." << endl;

        }
    } else {
        cout << c << " is a special character." << endl;
    }



    return 0;
}
