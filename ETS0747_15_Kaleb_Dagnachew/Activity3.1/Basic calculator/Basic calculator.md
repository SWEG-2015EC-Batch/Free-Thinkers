# problem analysis
* Creating a simple calculator program that takes two numbers and an operator (+, -, *, /) as input from the user and performs the operation. * Inputs:num1, num2 & operator
* Outputs: Result of the operation.
* operation: 
Do for each while true
If(op== ‘0’) ,exit

Switch(op):

    Case“+” result=num1+num2

    Case“-” result=num1-num2

    Case“” result=num1num2

    Case“/” if(num2!=0) result=num1+num2 else error

Default error

## pseudo code 
 - step 1:Start
   
 - step 2:Initialize stop as 0
   
 - step 3:Repeat the following steps while stop is not equal to 0
   
                - a. Input num1

                - b. Input num

                 -c. Input opr
   
  -step 4:Switch opr

      i. Case '+': Calculate the sum of num1 and num2
      
      ii. Case '-': Calculate the subtraction of num1 and num2
      
      iii. Case '/': Calculate the division of num1 by num2
      
      iv. Case '*': Calculate the multiplication of num1 and num2
      
      v. Default: Display an error message for an invalid operator
      
- step 5:Display the result

- step 6:Input stop
  
- step 7:End
  # Flow chart
    A[Start] -->|Initialize| B(Initialize stop as integer)
  
    B -->|Initialize| C(Initialize num1, num2, operation as float)
  
    C -->|Initialize| D(Initialize opr as char)
  
    D -->|Input| E(Display "Enter first number:")
  
    E -->|Input| F(Input num1)
  
    F -->|Input| G(Display "Enter second number:")
  
    G -->|Input| H(Input num2)
  
    H -->|Input| I(Display "Enter an operator (+, *, -, /):")
  
    I -->|Input| J(Input opr)
  
    J -->|Switch| K(Switch opr)
  
    K -->|'+'| L(operation = num1 + num2)
  
    L --> M(Display "The sum of", num1, "and", num2, "is", operation)
  
    K -->|'-'| N(operation = num1 - num2)
  
    N --> O(Display "The subtraction of", num1, "and", num2, "is", operation)
  
    K -->|'/'| P(operation = num1 / num2)
  
    P --> Q(Display "The division of", num1, "and", num2, "is", operation)
  
    K -->|'*'| R(operation = num1 * num2)
  
    R --> S(Display "The multiplication of", num1, "and", num2, "is", operation)
  
    K -->|Default| T(Display "You entered the wrong operator")
  
    T -->|Input| U(Display "Enter 0 to stop or any number to continue:")
  
    U -->|Input| V(Input stop)
  
    V -->|Clear Screen| W(Clear the screen)
  
    W -->|Loop| A
  
    A -->|Stop Condition| X(stop != 0)
  
    X -->|End| Y[End]



