//calculate x number the power of y number
#include<iostream>
#include<cmath>

using namespace std;

int main()
{ 
   int F,X,Y;
     cout<<"enter the exponential power"<<endl;
     cin>>Y;
     cout<<"enter the number to be powered"<<endl;
     cin>>X;
     F=pow (X,Y);
	 cout<<X<<" the power of "<<Y<<" is "<<F<<endl;
	 
	 return 0;
	 
}
