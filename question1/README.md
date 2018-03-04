## Question 1

Write a funciton that determines the maximum and minimum values from a one-dimensional array. Assume that the corresponding function prototype statement is

<code>void ranges(int x[], int npts, int *max_ptr, int *min_ptr)</code>

where npts contain the number of values in array x, and max_ptr and min_ptr are pointers to the variables in which to store the maximum and minimum values in the array.

Provide and print out 3 examples to show that your function is working as intended.

Compile Steps: 
gcc question1.c 	 	 	 	 	

Output:
$ ./a.exe 								

Array: 11 1 3 4 5 2 62 200 70						
Min value:1						
Max value:200					

Array: 3 1 2				
Min value:1							
Max value:3				

Array: 200 300 100 400 500 700 900 1000 800					
Min value:100						
Max value:1000							

