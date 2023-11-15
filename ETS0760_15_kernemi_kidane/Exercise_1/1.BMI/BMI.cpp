//calculate BMI
#include<iostream>

using namespace std;

int main()
{ 
   float W,H,BMI;
   //W is weight of the person, H is height of the person
     cout<<"enter the weight"<<endl;
     cin>>W;
     cout<<"enter the height"<<endl;
     cin>>H;
     BMI=W/(H*H);
	 cout<<"BMI is"<<BMI<<endl;
	 
	 return 0;
	 
}
