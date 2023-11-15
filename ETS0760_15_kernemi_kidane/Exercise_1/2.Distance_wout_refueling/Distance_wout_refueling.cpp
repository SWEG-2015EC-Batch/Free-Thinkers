//calculate possible distance without refueling
#include<iostream>

using namespace std;

int main()
{ 
   double Capacity,MPG,pd;
   //MPG is miles per gallon and pd is distance without refueling
     cout<<"enter the automobile's fuel tank capacity"<<endl;
     cin>>Capacity;
     cout<<"enter the miles per gallon for the automobile"<<endl;
     cin>>MPG;
     pd=Capacity*MPG;
	 cout<<"\n The automobile can go a distance of "<<pd<<" miles without refueling\n"<<endl;
	 
	 return 0;
	 
}
