#Problem analysis
Input: none

Output: rectangle, a hollow rectangle, a half pyramid, an inverted half pyramid, a hollow inverted half pyramid, and a full pyramid.

Operation:

1.Solid Rectangle:

.Nested loops iterate over rows (i) and columns (j).

.The program prints * for each iteration.

2.Hollow Rectangle:

.Similar nested loops with conditions to print * only at the border (i.e., first and last row, first and last column).

.Prints spaces for the inner part of the rectangle.

Half Pyramid:

.Nested loops for rows (i) and columns (j).

.Prints * in increasing order in each row.

Inverted Half Pyramid:

.Nested loops for rows (i) and columns (j).

.Prints * in decreasing order in each row.

Hollow Inverted Half Pyramid:

.Similar nested loops with conditions to print * only at the border (first column, last column, first row, last row).

.Prints spaces for the inner part of the inverted pyramid.

Full Pyramid:

.Nested loops for rows (i), columns (j), and spaces (k).

.Prints spaces to align the pyramid and * in increasing order in each row.

#Algorthim Design
##Pseudocode
Step1:start

Step2: do the following

1.Solid Rectangle:

.Nested loops iterate over rows (i) and columns (j).

.The program prints * for each iteration.

2.Hollow Rectangle:

.Similar nested loops with conditions to print * only at the border (i.e., first and last row, first and last column).

.Prints spaces for the inner part of the rectangle.

Half Pyramid:

.Nested loops for rows (i) and columns (j).

.Prints * in increasing order in each row.

Inverted Half Pyramid:

.Nested loops for rows (i) and columns (j).

.Prints * in decreasing order in each row.

Hollow Inverted Half Pyramid:

.Similar nested loops with conditions to print * only at the border (first column, last column, first row, last row).

.Prints spaces for the inner part of the inverted pyramid.

Full Pyramid:

.Nested loops for rows (i), columns (j), and spaces (k).

.Prints spaces to align the pyramid and * in increasing order in each row.

Step3:endline after each step

Step4: Print the patterns

Step5:end
