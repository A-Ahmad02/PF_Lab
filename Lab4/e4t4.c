/* 
	Lab Experiment 4
	Task 4
	
	This program calculates the GPA 
	when given the Grade points and Credit hours
*/

#include <stdio.h>

int main(void){
	
	/* Initialize variables */
	int i; /* Iterator for rows */
	int j; /* Iterator for columns */
	int x = 5; /* Number of Rows */
	int y = 5; /* Number of Columns*/
	
	for (i = 1; i <= y; i++){
		for (j = 1; j <= x; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}