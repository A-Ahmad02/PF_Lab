#include <stdio.h>

int main(void){
	
	int i; /* Iterator */
	int x; /* Number of spaces */
	int y; /* Number of astericks */
	int nRows = 3; /* Number of rows */

		/* Print Upper part */
	for (i = nRows - 1; i > -1; i--){
		for (x = 0; x < (nRows - i); x++){  
			printf(" ");	/* Print spaces */
		}
		for (y = 0; y < 1+(2*i); y++){
			printf("*");	/* Print astericks */
		}
		printf("\n"); 	/* New line */
	}
}