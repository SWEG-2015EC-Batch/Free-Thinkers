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
     if(Gsalary>0 && Gsalary<200){
        Incometax==0;
     }else if(Gsalary>=200 && Gsalary<600){
        Incometax==0.1;
     }else if(Gsalary>=600 && Gsalary<1200){
        Incometax==0.15;
     }else if(Gsalary>=1200 && Gsalary<2000){
        Incometax==0.2;
     }else if(Gsalary>=2000 && Gsalary<3500){
        Incometax==0.25;
     }else if(Gsalary>=3500){
        Incometax==0.3;
     }else {
        cout<<"error"<<endl;
     }

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
