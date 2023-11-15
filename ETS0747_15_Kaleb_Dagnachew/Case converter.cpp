#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
 char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;
    char lowercaseChar = tolower(inputChar);
   cout << "Lowercase equivalent: " << lowercaseChar << endl;
    char uppercaseChar = toupper(inputChar);
    cout << "Uppercase equivalent: " << uppercaseChar << endl;
 return 0;

}
