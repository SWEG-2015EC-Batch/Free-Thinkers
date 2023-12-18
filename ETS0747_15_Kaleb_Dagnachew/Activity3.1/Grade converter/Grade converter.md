# Problem Analysis:

* Design a program to calculate and display the total mark and corresponding grade for a student based on marks obtained in different components (Test, Quiz, Project, Assignment, and Final Exam).

* Inputs:

  - Marks for Test, Quiz, Project, Assignment, and Final Exam.

* Outputs:

  -Total Mark and corresponding Grade.

* Conditions:

  - Individual component marks must be within their respective valid ranges (0 to 15 for Test, 0 to 5 for Quiz, 0 to 20 for Project, 0 to 10 for Assignment, 0 to 50 for Final Exam).
  
  -Total Mark must be within the range of 0 to 100.

  -Grade Calculation:

    A+: Total Mark >= 90

    A: 80 <= Total Mark < 90

    B+: 75 <= Total Mark < 80

    B: 60 <= Total Mark < 75

    C+: 55 <= Total Mark < 60

    C: 45 <= Total Mark < 55

    D: 30 <= Total Mark < 45

    F: Total Mark < 30
  # Algorithm

   ##Pseudocode

  Step1:start

  Step2:are the following

  totalMark=test + quiz + project + assignment + finalexam;

  if (totalMark >= 90) print "Mark Grade: A+"

  else if (totalMark >= 80) print "Mark Grade: A" else if (totalMark >= 75) print"Mark Grade: B+" else if (totalMark >= 60) print "Mark Grade: B"

  else if (totalMark >= 55) print "Mark Grade: C+"

  else if (totalMark >= 45) print "Mark Grade: C"

  else if (totalMark >= 30) print "Mark Grade: D"

  else print "Mark Grade: F"

  Step3:end
