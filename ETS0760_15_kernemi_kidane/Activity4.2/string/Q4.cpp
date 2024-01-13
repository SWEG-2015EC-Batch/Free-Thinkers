#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxTokens = 50;
    char input[1000]; 
    char tokens[maxTokens][100]; 

    cout << "Enter a line of text: ";
    cin.getline(input, sizeof(input));

    int tokenCount = 0;

    char *token = strtok(input, " ");
    while (token != nullptr && tokenCount < maxTokens) {
        strcpy(tokens[tokenCount], token);
        token = strtok(nullptr, " ");
        tokenCount++;
    }

    cout << "Tokens separated by space characters:\n";
    for (int i = 0; i < tokenCount; ++i) {
        cout << tokens[i] << endl;
    }

    return 0;
}
