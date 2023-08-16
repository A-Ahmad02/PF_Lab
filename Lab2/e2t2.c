/* 
	Lab Experiment 2
	Task 2 
	
	This program that takes as inputs three different integers a, b and c 
	and then displays their sum, the average, and the product.
*/
	
#include <stdio.h>

int main(void)
{
  int a, b, c; /* Defining Variables */
  printf("Enter three integers:");
  scanf("%d %d %d", &a, &b, &c); /* Taking inputs */
  
  /* Printing output */
  printf("The sum is %d\n", a+b+c);
  printf("The product is %d\n", a*b*c);
  printf("The average is %f\n", ((float)a + (float)b + (float)c )/3 );
  return 0;
}
/* End of program */
