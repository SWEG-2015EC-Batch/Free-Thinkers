# Problem Analysis:

  - Design a program to calculate the net payment for an employee based on their gross salary, worked hours, overtime bonus, income tax, and     pension.

* Inputs:

  - Gross salary
    
  - Worked hours
    
  - Overtime bonus rate per hour (if worked hours > 40)

* Outputs:

  - Net payment after deducting income tax, pension, and adding overtime bonus.

* Conditions:

  - If worked hours exceed 40, an overtime bonus is considered.
  - Pension is calculated as 7% of the gross salary.
  - Income tax is calculated based on the gross salary and an unspecified income_tax_rate.

  # Algorithm
  
  ## pseudocode

step 1. Prompt "Enter your gross salary:"

step 2. Read gross_salary

step 3. Prompt "Enter your worked hours:"

step 4. Read worked_hours

step 5. If worked_hours > 40, then

step 6. Prompt "Enter the overtime bonus rate per hour:"

step 7. Read over_time_bonus_ratePHour

step 8. bonus_payment = (worked_hours - 40) * over_time_bonus_ratePHour

step 9. pension = gross_salary * (7/100)

step 10. income_tax = gross_salary * income_tax_rate  // Income tax rate is not specified in the code

step 11. net_pay = gross_salary - pension - income_tax + bonus_payment

step 12. Display "Your net payment after paying your tax and pension will be: net_pay Birr"

step 13. End

  
