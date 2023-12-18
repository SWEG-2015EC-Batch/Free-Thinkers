# Problem Analysis:

  - The program aims to calculate the net payment for an employee based on their gross salary, worked hours, overtime bonus, income tax, and     pension.

* Inputs:

  - Gross salary
    
  - Worked hours
    
  - Overtime bonus rate per hour (if worked hours > 40)
  
* Outputs:

  - Net payment after deducting income tax, pension, and adding overtime bonus.

* Conditions:

  - If worked hours exceed 40, an overtime bonus is considered.

  - Pension is calculated as 7% of the gross salary.

  - Income tax is calculated based on the gross salary using specified income tax rates.

  # Algorithm

  ## Pseudocode

step 1. Prompt "Enter your gross salary:"

step 2. Read gross_salary

step 3. Prompt "Enter your worked hours:"

step 4. Read worked_hours

step 5. If worked_hours > 40, then

step 6. Prompt "Enter the overtime bonus rate per hour:"

step 7. Read over_time_bonus_ratePHour

step 8. bonus_payment = (worked_hours - 40) * over_time_bonus_ratePHour

step 9. pension = gross_salary * (7/100)

step 10. If gross_salary >= 3500, then

step 11. income_tax_rate = 0.3

step 12. Else if 2000 <= gross_salary < 3500, then

step 13. income_tax_rate = 0.25

step 14. Else if 1200 <= gross_salary < 2000, then

step 15. income_tax_rate = 0.2


step 16. Else if 600 <= gross_salary < 1200, then

step 17. income_tax_rate = 0.15

step 18. Else if 200 <= gross_salary < 600, then

step 19. income_tax_rate = 0.10

step 20. Else,

step 21. income_tax_rate = 0

step 22. income_tax = gross_salary * income_tax_rate

step 23. net_pay = gross_salary - pension - income_tax + bonus_payment

step 24. Display "Your net payment after paying your tax and pension will be: net_pay Birr"

step 25. End

