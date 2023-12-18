#Problem analysis

Input:character(ch)

Output: determine it as uppercase alphabet or lowercase alphabet and vowei and consonant or digit(even or odd ) or special character

Operation:

-if (isalpha(ch))

if (isupper(ch)) display the entered character is an uppercase alphabet   else display the entered character is a lowercase alphabet   

-switch(ch)

case‘a’,case‘e’,case‘i’,case‘o’,case‘u’,case‘A’,case‘E’,case‘I’,case‘O’,case‘U display The entered character is a vowel

default display The entered character is a consonant

-else if (isdigit(ch)) display the entered character is a digit

If(digit%2==0) display The entered character is a digit and it is even

Else The entered character is a digit and it is odd   -else display the entered character is a special character   

#Algorthim Design

#Pseudocode

Step1:start

Step2:Enter ch

Step3:if (isalpha(ch))go to step 4 otherwise go to step 6

Step4:if (isupper(ch)) print "The entered character is an uppercase alphabet." else print "The entered character is a lowercase alphabet."

Step5:switch(ch)

case 'a':

case 'e':

case 'i':

case 'o':

case 'u':

case 'A':

case 'E':

case 'I':

case 'O':

case 'U'

print "The entered character is a vowel."

defaut print "The entered character is a consonant." go to step 9

Step6:else if (isdigit(ch))

Step7:if(digit%2==0) print “The entered character is a digit and it is even.” else print

“The entered character is a digit and it is odd."

Step8:else print "The entered character is a special character."

Step9: end

#Flowchart

![image](https://github.com/SWEG-2015EC-Batch/Free-Thinkers/assets/117913089/4ffe69bd-efce-49db-bf73-4e841c8ce87e)

