#include <stdio.h>

/*

In this exercise you will examine a program consisting of a number of bitwise C operations.
You need to determine what each function is doing.
You have to determine what each function is doing WITHOUT running the code. Once you determine the function, you
should run the code to check your answer.
The program asks you to input numbers zz, a,b, c,d, n and passes these to the functions.
In main, there are some IF statements that you should examine to figure out what will be printed and why.
*/

/* Assume the numbers entered are: (in hex) zz= abcd0123 */
/* a=4	b=8	c-12	n-2  */

/*
this function operates on arguments/inputs x,y and returns a value
 */
 /* what does this function return ? */

  int CallMeFirst(int x, int y) {
  int temp;
  temp = x^y;
  return (temp);
}



/*
this function operates on input argument x and returns a value. what does it return?
 */

 int CallMeNext(int x){
   int t;
   t= (1 <<x);
   t= t+1;
   return (t);
 }

/*
this function operates on arguments/inputs x,y and returns a value
Determine what is being computed, and what the function returns when x=y
 */

int CallMeLast(int x, int y){
  int temp;
  temp = ~y;
  temp = temp +1;
  temp = temp + x;
  return(temp);
}

/* the function below takes x,n as inputs where n is a number between 0 and 3 and x is a 32 bit integer */
/* what does this function compute. i.e., what is returned. */
/* HINT: think f the input x represented using Hex - i.e, 8 hex digits. */

int whoamI(int x, int n){
  int rs;
	int y = n << 3;
	int xs = 0xFF << y;
	rs=  xs & x;
	return (rs >> y);
}

int
main(){
  int a, b, c, d, n;
  unsigned int x,y,zz;
  int t1,t2,t3, t4;
  int i,j;


 	printf("Enter numbr zz in hex:");
 	scanf ("%x",&zz);
	printf("zz is %x\n", zz);
 	printf("Enter number a, an integer  between 1 and 5:");
 	scanf ("%d",&a);
	printf("\n");
 	printf("Enter number b, an integer  between 5 and 10:");
 	scanf ("%d", &b);
	printf("\n");
 	printf("Enter number c, an integer between 10 and 20:");
 	scanf ("%d", &c);
	printf("\n");
	printf("Enter second number,n,  an integer greater than or equal to 0 and less than 4:");
	scanf ("%d", &n);
	printf("\n");
	printf("you entered a= %d b= %d and c= %d n=%d\n", a,b,c,n);

	x= a-b;
	/* Question 1:What is the outcome of the IF statement below? */
	if (x >0) printf ("First IF succcessful \n");
	else printf("First IF failed \n");

	/*at this point, you have three integers a,b,c */

	i= a | (~a);
    j = a & (~a);

	/* consider the values of i,j,a ~a as you answer the next three questions */

	/* QUESTION 2: What gets printed after second IF statement - i.e., is it successful */
	if (a || (~a))
	  printf("Second IF is successful\n");
    
    /* QUESTION 3: Is the third IF successful ? */
    if (a && (~a))
          printf("Third IF is successful\n");

	/* QUESTION 4: Is the fourth IF successful ? */
    if (i && j)
	  printf("Fourth IF is successful\n");
	
	/* QUESTION 5: What is the value of t1 after the function call  ? */
	/* QUESTION 6: Describe what function CallMeFirst does */
	t1=CallMeFirst(a,b);
	printf("output of CallMeFirst is t1 = %d  \n", t1);
	
	
	/* QUESTION 7: What is the value of t2 after the function call */
	/* QUESTION 8: Describe what function CallMeNext does */
	t2=CallMeNext(b);
	printf("output of CallMeNext is  t2 = %d  \n", t2);
	
	/* QUESTION 9: What is the value of t3 after the function call */
	/* QUESTION 10: Describe what function CallMeLast does */

	t3=CallMeLast(b,c);
	printf("output of CallMeLast is  t3 = %d  \n", t3);

	
 	

	/* QUESTION 11: What is the value (in hex) of t4 ? */
	/* QUESTION 12: Describe what function whoamI does */
	t4=whoamI(zz,n);
	printf("output of whoamI, in hex format, is t4 =%x \n", t4);



	return 0;
}
