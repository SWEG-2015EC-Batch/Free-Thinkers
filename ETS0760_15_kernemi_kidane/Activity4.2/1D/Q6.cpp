#include <iostream>
#include <string.h>
using namespace std;
int main(){ 
    int n;
    float totalmark[20];
    string status[20];
     cout<<"enter the number of students: ";
     cin>>n; 
    for(int i=0;i<n;i++){
        cout<<"enter the total mark of student "<<i+1<<": ";  
        cin>>totalmark[i]; 
    if(totalmark[i]>=80){
        status[i]="Excellent";
       }else if(totalmark[i]>=60){
        status[i]="Very Good";
       }else if(totalmark[i]>=50){
        status[i]="Fair";
       }else if(totalmark[i]>=40){
        status[i]="Poor";
       }else if(totalmark[i]<40){
        status[i]="Fail";
       }else{
        status[i]="Error";
       }
       }
    cout<<"students \t "<<"totalscore\t"<<"score status"<<endl; 
   for(int i=0;i<n;i++){
    cout<<"student "<<i+1<<"\t\t"<<totalmark[i]<<"\t"<<status[i]<<endl;
   }  
return 0;
}

    

