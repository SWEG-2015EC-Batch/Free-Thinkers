## Problem analysis
Input:
       -Gsalary
       -workedhr
       -Incometax 
       -Overtimebhr
Output: Netsalary
Operation: 
  -Intitiate Bonusp=0
  -netsalary=Gsalary-(Gsalary*0.07)-(Gsalary*Incometax);
  -Check if the employee worked hours exceed 40 hrs.
  -Compute the bonus payment 
            Bonusp=(workedhr-40) *Overtimebhr;
  -Compute Net-Pay of an employee
            net Salary +=Bonusp
## Algorthim Design
# Pseudocode
Step1:start
Step2: Enter Gsalary, workedhr, Incometax 
Step3:start bonusp as 0
Step4:calculate net salary as netsalary=Gsalary-(Gsalary*0.07)-(Gsalary*Incometax);
Step5:if workedhr>40,enter overtimebhr 
Step6:netsalary+=Bonusp;
Step7:display netsalary
Step8:end
# Flowchart
<img width="172" alt="image" src="https://github.com/SWEG-2015EC-Batch/Free-Thinkers/assets/149039271/324430b4-5b32-40d7-b01a-826c1fdd2995">
