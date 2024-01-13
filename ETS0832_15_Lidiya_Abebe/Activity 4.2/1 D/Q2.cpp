#include <iostream>
using namespace std;
int main() {
    const int size = 8; 
    int temp[size];      

   cout << "Enter eight integer numbers:" << std::endl;
    int total = 0;  

    for (int i = 0; i < size; ++i) {
      cout << "Number " << i + 1 << ": ";
        cin >> temp[i];

        total += temp[i];
    }

    double average = static_cast<double>(total) / size;

   cout << "\nTotal: " << total << std::endl;
    cout << "Average: " << average << std::endl;

    return 0;
}
