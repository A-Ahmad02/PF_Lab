#include <stdio.h>

int main(void){
	
	int i; /* Iterator */
	int x; /* Number of spaces */
	int y; /* Number of astericks */
	int nRows = 5; /* Number of rows */
	int rng = (nRows / 2) + 1; /* Half the number of rows +1 */
	
	/* Account for even input */
	if (nRows % 2 == 0){
		rng --;
	}

	/* Print Upper part */
	for (i = rng - 1; i > -1; i--){
		for (x = 0; x < (rng - i); x++){  
			printf(" ");	/* Print spaces */
		}
		for (y = 0; y < 1+(2*i); y++){
			printf("*");	/* Print astericks */
		}
		printf("\n"); 	/* New line */
	}
	
	/* Print Lower part */
	for (i = 1; i < rng; i++){
		for (x = 0; x < (rng - i); x++){  
			printf(" ");	/* Print spaces */
		}
		for (y = 0; y < 1+(2*i); y++){
			printf("*");	/* Print astericks */
		}
		printf("\n"); 	/* New line */
	}

	return 0;
}