#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char firstProgram[100] = "strong women";

    char secondProgram[100];
    strcpy(secondProgram, "healer");

    cout << "My Two Favorite Television Programs:\n";
    cout << "1. " << firstProgram << endl;
    cout << "2. " << secondProgram << endl;

    return 0;
}
