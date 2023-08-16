/* 
	Lab Experiment 4
	Task 5
	
	This program calculates and displays
	the table of 1 and 2 till 5
*/

#include <stdio.h>

int main(void){
	
	/* Initialize variables */
	int i; /* Iterator for rows */
	int j; /* Iterator for columns */
	int x = 5; /* Table till x */
	int y = 2; /* Tables of 1 to y */
	
	for (i = 1; i <= y; i++){
		for (j = 1; j <= x; j++){
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}