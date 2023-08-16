/* 
	Lab Experiment 3
	Task 1 
	
	This program asks whether you want to proceed 
	If you proceed, it requests your age and tells 
	whether you are eligible for the driving license or not
*/

#include <stdio.h>

int main(void){
	
	/* Defining Variable */
	char y_n; 
	
	printf("Do you want to proceed? Enter y for yes and n for no:");
	scanf("%c", &y_n);
	
	if (y_n == 'y'){
		
		int age; /* Defining Variable */
		
		printf("Enter your age:");
		scanf("%d", &age);
		
		if (age >= 18){
			printf("You are eligible for the driving license.\n");
		}
		else{
			printf("You are not eligible for the driving license.\n");
		}
		/* End of nested if else statement */
	}
	else if (y_n == 'n'){
		printf("End of the program\n");
	}
	/* End of outer if else statement */
	
	return 0;
}
/* End of program */