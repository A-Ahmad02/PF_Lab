#include <stdio.h>

int main(void){
	
	int i; /* Iterator */
	int x; /* Number of spaces */
	int y; /* Number of astericks */
	int nRows = 3; /* Number of rows */

	/* Print Lower part */
	for (i = 0; i < nRows; i++){
		for (x = 0; x < (nRows - i); x++){  
			printf(" ");	/* Print spaces */
		}
		for (y = 0; y < 1+(2*i); y++){
			printf("*");	/* Print astericks */
		}
		printf("\n"); 	/* New line */
	}

}