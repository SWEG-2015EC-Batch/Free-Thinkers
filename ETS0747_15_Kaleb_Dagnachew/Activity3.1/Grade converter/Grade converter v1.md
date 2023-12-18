# Problem Analysis:

Design a program to determine the grade based on a student's mark input.
* Inputs:

  Mark (a floating-point number representing the student's score)

* Outputs:

Grade corresponding to the mark

* Conditions:

The mark should be between 0 and 100, inclusive.

* Grades:

    A+: Mark >= 90

    A: 80 <= Mark < 90

    B+: 75 <= Mark < 80

    B: 60 <= Mark < 75

    C+: 55 <= Mark < 60

    C: 45 <= Mark < 55

    D: 30 <= Mark < 45

    F: 0 <= Mark < 30
  * operation:
  
- Prompt "PLEASE ENTER YOUR MARK POINT CORRECTLY!!!"
-  Read Mark
-   f Mark >= 90, then
  - Display "your Grade mark is: A+"
- Else if 80 <= Mark < 90, then
  - Display "your Grade mark is: A"
- Else if 75 <= Mark < 80, then
  - Display "your Grade mark is: B+"
- Else if 60 <= Mark < 75, then
  - Display "your Grade mark is: B"
- Else if 55 <= Mark < 60, then
  - Display "your Grade mark is: C+"
- Else if 45 <= Mark < 55, then
  - Display "your Grade mark is: C"
- Else if 30 <= Mark < 45, then
  - Display "your Grade mark is: D"
- Else if Mark < 0 or Mark > 100, then
- Display "you have entered Wrong mark point!!!"
- Else
     - Display "your Grade mark is: F"
     - End


# Algorithm:

##Pseudocode 

Step1:start

Step2:are the following

if (mark >= 90) print "Mark Grade: A+" else if (mark >= 80) print "Mark Grade: A" else if (mark >= 75) print"Mark Grade: B+" else if (mark >= 60) print "Mark Grade: B"

else if (mark >= 55) print "Mark Grade: C+"

else if (mark >= 45) print "Mark Grade: C"

else if (mark >= 30) print "Mark Grade: D"

else print "Mark Grade: F"

Step3:end
