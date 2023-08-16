xccxx/* 
	Lab Experiment 3
	Task 3
	
	This program takes three integers from the user 
	and displays the maximum integer of the three 
*/

#include <stdio.h>

int main(void){
	
	/* Defining Variables */
	int a, b, c;

	printf("Enter a: ");
	scanf("%d", &a); /* Initializing a */

	printf("Enter b: ");
	scanf("%d", &b); /* Initializing b */

	printf("Enter c: ");
	scanf("%d", &c); /* Initializing c */

	/* Start of If Else Block */
	if ((a > b) && (a > c)){
	printf("a has the maximum which is %d.\n", a);
	}
	else if ((b > a) && (b > c)){
	printf("b has the maximum which is %d.\n", b);
	}
	else if ((c > b) && (c > a)){
	printf("c has the maximum which is %d.\n", c);
	}
	/* End of If Else Block*/
	
	return 0;
}
/* End of program */
