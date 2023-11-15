//calculate gross net salary and bonus payment of month
#include<iostream>

using namespace std;

int main()
{ 
   string employee_name;
   
   double work_hour, base_salary, bonus_rate, gross_salary,bonus_payment,net_salary,pension_rate(0.05),tax_rate(0.15);
   
     cout<<"enter the your full name"<<endl;
   
     getline (cin, employee_name);
   
     cout<<"enter the amount of hour you have worked"<<endl;
   
     cin>>work_hour;
   
     cout<<"enter your base salary"<<endl;
   
     cin>>base_salary;
   
      cout<<"enter your bonus rate per hour"<<endl;
   
      cin>>bonus_rate;
      
      gross_salary=base_salary+ (work_hour*bonus_rate*4);
      // 4  was used because there are 4 weeks in a month
     
	  net_salary=gross_salary-(gross_salary*pension_rate)-(gross_salary* tax_rate);
	  
	  bonus_payment=work_hour*bonus_rate*4;
	  
	  cout<<employee_name<<endl;
	  
	  cout<<"your gross salary for this month is "<<gross_salary<<endl;
	  
	  cout<<"your net salary for this month is "<<net_salary<<endl;
	  
	  cout<<"your bonus payment for this month is "<<bonus_payment<<endl;
    
	 
	 return 0;
	 
}
