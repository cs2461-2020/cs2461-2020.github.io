#include <stdio.h>

int *allocarray(int size){
    int *retval=NULL;
    /* call malloc and ask for as many blocks as required by size */
    retval = (int*) malloc(sizeof(int)*size);
    if (retval==NULL) {
        return NULL;}
    return retval; // return pointer to these blocks, retval points to 1-D array
}

int main ()
{
  int S[10];          // Statically-sized unidimensional array.
  
  int *D = NULL;     // Declaration of 1D array variable for dynamic allocation.
  

  int i, j;           // For-loop variables.

  int size;            // For use in examples.
    int sum;


  // Static example. The space is already allocated, so the
  // array can be used immediately.
  for (i=0; i < 10; i++) {
    S[i] = i * 100;                // Fill the array with some numbers.
  }




    printf("Input size of array, at most 10:\n");
    scanf("%d",&size);
    D=allocarray(size); // call allocarray to request array from heap
    
    for (i=0; i<size; i++){
        D[i] = S[i];
    }

  sum = 0;
  for (i=0; i < 10; i++) {
    sum += S[i];                   // Compute the sum of static array's numbers.
  }
  printf ("sum of static array A = %d\n", sum);      // Print sum.
    
    sum = 0;
    for (i=0; i < size; i++) {
        sum += D[i];                   // Compute the sum of dynamic array's numbers.
    }
    printf ("sum of dynamic array D = %d\n", sum);      // Print sum.
 


  // Must free allocated memory when not needed anymore:

  free (D);

}
