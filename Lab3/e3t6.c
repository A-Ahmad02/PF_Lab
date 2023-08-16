/* 
	Lab Experiment 3
	Task 6
	
	This program takes a floating number from the user. 
	It displays the message “The value of x is 0.1” 
	if the user enters 0.1 
*/

#include <stdio.h>

int main(void){
	
	/* Defining x */
	float x;
	
	printf("Enter a number: ");
	scanf("%f", &x); /* Initializing x */
	
	if ((x*10) == 1){
		printf("The value of x is 0.1\n");
	}
	
	return 0;
}
/* End of program */