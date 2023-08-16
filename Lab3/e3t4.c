/* 
	Lab Experiment 3
	Task 4
	
	This program which takes 3 integers -- x, bound1, and bound2, 
	where bound1 is not necessarily less than bound2. 
	
	If x is between the two bounds, it displays x. 
	but if x is less than the lower bound, it displays the lower bound, 
	or if x is greater than the upper bound, it displays the upper bound. 
*/

#include <stdio.h>

int main(void){
	
	/* Defining Variables */
	int x, b1, b2;

	printf("Enter x, bound1 and bound2:");
	scanf("%d %d %d", &x, &b1, &b2); /* Initializing variables */

	/* Switch b1 and b2 if b1 > b2 */
	if (b1 >  b2){ 
	  int change = b1;
	  b1 = b2;
	  b2 = change;
	}

	/* Start of If Else Block */
	if ((x > b1) && (x < b2)){
	  printf("%d\n", x);
	}
	else if (x < b1) {
	  printf("%d\n", b1);
	}
	else if (x > b2) {
	  printf("%d\n", b2);
	}
	/* End of If Else Block*/

	return 0;
}
/* End of program */