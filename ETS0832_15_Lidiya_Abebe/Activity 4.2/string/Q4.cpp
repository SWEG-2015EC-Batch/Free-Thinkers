#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string inputLine;

    cout << "Enter a line of text: ";
    getline(cin, inputLine);

    vector<string> tokens;
    istringstream iss(inputLine);
    string token;

    while (iss >> token) {
        tokens.push_back(token);
    }

    cout << "Tokens separated by space characters:" << endl;
    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}
