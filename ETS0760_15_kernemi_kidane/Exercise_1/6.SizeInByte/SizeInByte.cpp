//calculate time in day take to send file
#include<iostream>

using namespace std;

int main()
{ 
  int timeInSec, timeInHour, timeInDay, sizeInByte;
  
     cout<<"enter the size in bytes"<<endl;
     
	 cin>>sizeInByte;
     
     timeInSec=sizeInByte/960; 
     //960 characters is equal to 960 bytes because 1 character hold in 1 byte
     
     timeInHour=timeInSec/3600;
     
     timeInDay=timeInHour/24;
     
	 cout<<"time needed in seconds is "<<timeInSec<<endl;
	 
	 cout<<"time needed in hours is "<<timeInHour<<endl;
	 
	 cout<<"time needed in days is "<<timeInDay<<endl;
     
	 return 0;
	 
}
