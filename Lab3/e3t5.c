/* 
	Lab Experiment 3
	Task 5
	
	This program requests 2 boolean values and 
	gives answer according to the AND Truth Table
*/

#include <stdio.h>

int main(void){
	
	/* Defining Variables */
	char x, y;

	printf("Enter x: ");
	scanf("%c", &x); /* Initializing x */

	printf("Enter y: ");
	scanf(" %c", &y); /* Initializing y */

	/* Start of If Else Block */
	if ((x == 't') && (y == 't')){
	  printf("%c AND %c is TRUE\n", x, y);
	}
	else if (((x == 't') && (y == 'f')) || ((x == 'f') && (y == 't')) || ((x == 'f') && (y == 'f'))){
	  printf("%c AND %c is FALSE\n", x, y);
	}
	/* End of If Else Block*/

	return 0;
}
/* End of program */