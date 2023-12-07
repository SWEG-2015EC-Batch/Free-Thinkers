// calculate Tf
#include<iostream>

using namespace std;

int main()
{ 
   double Gsalary,Workedhr,Incometax,Overtimebhr,Bonusp=0,netsalary;
     cout<<"enter gross salary "<<endl;
     cin>>Gsalary;
     cout<<"enter worked hour "<<endl;
     cin>>Workedhr;
     cout<<"enter income tax rate "<<endl;
     cin>>Incometax;

        netsalary=Gsalary-(Gsalary*0.07)-(Gsalary*Incometax);
        cout<<"the net salary is"<< netsalary<<endl;
    
    if(Workedhr>40) {
    cout<<"enter the overtime bonus hour"<<endl;
    cin>>Overtimebhr;
    Bonusp=(Workedhr-40)*Overtimebhr;
    }
    netsalary+=Bonusp;
    cout<<"the net salary is"<< netsalary<<endl;
  
     return 0;
}
