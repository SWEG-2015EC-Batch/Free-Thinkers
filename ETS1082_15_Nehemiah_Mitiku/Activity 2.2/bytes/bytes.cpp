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
     
	   cout << "Time needed in seconds is " << timeInSec << " seconds" << endl;
	 
	   cout << "Time needed in hours is " << timeInHour << " hours" << endl;
	 
	   cout << "Time needed in days is " << timeInDay << " days";
     
	   return 0;
	 
}
