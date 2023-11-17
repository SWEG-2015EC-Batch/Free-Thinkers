#include <iostream>
using namespace std;
int main() 
{
  float capacity, mpg;
  cout << "Enter capacity (Fuels in gallon)";
  cin >> capacity;
  cout << "Enter mpg (Total miles it goes per gallon)";
  cin >> mpg;
  float miles=capacity*mpg;
  cout << "You can go " << miles << " miles with full gallon.";
  return 0;
}
