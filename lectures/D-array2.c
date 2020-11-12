#include <stdio.h>
/* FILL IN THE MISSING CODE TO COMPLETE THE PROGRAM: ALLOCATING 2-D DYNAMIC ARRAY */

/* define function allocarray - what type does it return ? recall that we want a 2-D array of doubles */
allocarray(int rows, int cols){

	/* define retval as the variable that is returned by the function...what is its type ? */

    int i;
    /* first get as many 'pointers' to *retval as there are rows */

	/* Call malloc here...fill in the code */

    if (retval==NULL) {
        return NULL;}
    /* next for each row, allocate number of elements in a column */

	/* fill in the code */ 


	/*are you checking to see if there is enough space; i.e, check if any of the malloc calls returns NULL */ 

    return retval;
}





int main ()
{
  double B[20][20];            // Statically-sized 2D array.

  // Next, you sohuld declare 2D dynamic array variable B2...what is its type if the array has to contain double 

  int i, j;           // For-loop variables.
  int r,c;   // for number of rows, r, and number of columns c
  double dSum;      



  // 2D example with static array.
  for (i=0; i < 20; i++) {
    for (j=0; j < 20; j++) {
      B[i][j] = i+j;               // Fill the array with some numbers.
    }
  }

  dSum = 0;
  for (i=0; i < 20; i++) {
    for (j=0; j < 20; j++) {
      dSum += B[i][j];             // Compute the sum of array's numbers.
    }
  }
  printf ("Sum of elements in static array = %lf\n", dSum);   // Print sum.

  
  // Dynamic version of 2D example. Note the two-step allocation.

  // ask for size of array
  printf("Enter number of rows, less than 20:\n");
  scanf(" %d", &r);
  printf("Enter number of columns, less than 20:\n");
  scanf(" %d", &c);



  B2=allocarray(r,c);


  for (i=0; i < r; i++) {
    for (j=0; j < c; j++) {
      B2[i][j] = B[i][j];              // Fill the array with some numbers from static array.
      printf("filling i= %d j= %d \n", i,j);
    }
  }

  dSum = 0;
  printf("Starting sum\n");

  for (i=0; i < r; i++) {
    for (j=0; j < c;  j++) {
      dSum = dSum +  B2[i][j];            // Compute the sum of array's numbers.
    }
  }
  printf ("Sum of elements in Dynamic array = %lf\n", dSum);   // Print sum.


  // Must free allocated memory when not needed anymore:



}
