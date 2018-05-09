## Question 1

Write a funciton that determines the maximum and minimum values from a one-dimensional array. Assume that the corresponding function prototype statement is

<code>void ranges(int x[], int npts, int *max_ptr, int *min_ptr)</code>

where npts contain the number of values in array x, and max_ptr and min_ptr are pointers to the variables in which to store the maximum and minimum values in the array.

Provide and print out 3 examples to show that your function is working as intended.

Compile Steps: 
gcc 1.c
Output:
$ ./a.exe
for x1 = {3,8,1,6,2}
the maximum is: 8
the minimum is: 1
for x2 = {6,9,-2,1,4,5}
the maximum is: 9
the minimum is: -2
for x3 = {-4,0,6}
the maximum is: 6
the minimum is: -4


