# Problem analysis
Input:Gsalary, workedhr, Overtimebhr


Output: Netsalary


Operation: 


-Intitiate Bonusp=0

-Check if the employee Gsalary is 

        0-200           Incometax==0
        
        200-600         Incometax==0.1
        
        600-1200        Incometax==0.15
        
        1200-2000       Incometax==0.2
        
        2000-3500       Incometax==0.25
        
        3500 and above  Incometax==0.3
        
        Else               error

-netsalary=Gsalary-(Gsalary*0.07)-(Gsalary*Incometax)

- Check if the employee worked hours exceed 40 hrs.

-Compute the bonus payment 

     Bonusp=(workedhr-40) *Overtimebhr;

-Compute Net-Pay of an employee

     net Salary +=Bonusp

# Algorthim Design

## Pseudocode

Step1:start

Step2: Enter gross salary, worked hours, income taxrate

Step3:start bonusp as 0

Step4:if(Gsalary>0 && Gsalary<200){Incometax==0;}

      else if(Gsalary>=200 && Gsalary<600){Incometax==0.1;}
      
      else if(Gsalary>=600 && Gsalary<1200){Incometax==0.15;}
      
      else if(Gsalary>=1200 && Gsalary<2000){Incometax==0.2;}
      
      else if(Gsalary>=2000 && Gsalary<3500){Incometax==0.25;}
      
      else if(Gsalary>=3500){Incometax==0.3;}
      
      else {cout<<"error"<<endl;}

Step5:calculate net salary as 

      netsalary=Gsalary-(Gsalary*0.07)-(Gsalary*Incometax);

Step6:if workedhr>40,enter overtimebhr 

Step7:Bonusp=(Workedhr-40)*Overtimebhr;

      netsalary+=Bonusp;

Step8:display netsalary

Step9:end

## Flowchart

<img width="257" alt="image" src="https://github.com/SWEG-2015EC-Batch/Free-Thinkers/assets/149039271/26b0ff7b-be70-485c-ab88-82160cceb90f">
