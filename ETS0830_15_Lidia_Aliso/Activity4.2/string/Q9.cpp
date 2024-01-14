/* a program to store and print the names of your two favorite television programs.
Initialize one of the strings (assign it the first program’s name) at the time you declare the
array. Initialize the second value in the body of the program with the strcpy() function.*/

#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    const int maxLength = 50; 

    
    char program1[maxLength] = "Breaking Bad";


    char program2[maxLength];
    strcpy(program2, "Stranger Things");

    
    cout << "My Two Favorite Television Programs:" << endl;
    cout << "1. " << program1 << endl;
    cout << "2. " << program2 << endl;

    return 0;
}
