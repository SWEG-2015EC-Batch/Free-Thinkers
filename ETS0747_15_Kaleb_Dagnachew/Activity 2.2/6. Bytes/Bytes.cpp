#include<iostream>

using namespace std;

int main()
{ 
  int timeInSec, timeInHour, timeInDay, sizeInByte;
  
     cout<<"enter the size in bytes"<<endl;
     
	 cin>>sizeInByte;
     
     timeInSec=sizeInByte/960; 
     
     timeInHour=timeInSec/3600;
     
     timeInDay=timeInHour/24;
     
	 cout<<"time needed in seconds is "<<timeInSec<<endl;
	 
	 cout<<"time needed in hours is "<<timeInHour<<endl;
	 
	 cout<<"time needed in days is "<<timeInDay<<endl;
     
	 return 0;
	 
}
