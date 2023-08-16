/* 
	Lab Experiment 3
	Task 2
	
	This program displays the message 
	“Let’s visit Murree.” 
		If the temperature of Lahore is greater than or equal to 40 
		and the temperature of Murree is less than or equal to 20. 
	“Murree tour is not essential.”
		If the temperatures are not within the ranges.
*/

#include <stdio.h>

int main(void){
	
	/* Defining Variables */
	int temp_L, temp_M;
	
	/* Taking inputs */
	printf("Enter temperature of Lahore:");
	scanf("%d", &temp_L);
	printf("Enter temperature of Muree:");
	scanf("%d", &temp_M);
	
	/* Start of If Else Block */
	if ((temp_L >= 40) && (temp_M <= 20)) {
		printf("Let’s visit Murree.\n");
	}
	else if ((temp_L < 40) || (temp_M > 20)){
		printf("Murree tour is not essential.\n");
	}
	/* End of If Else Block*/
	
	return 0;
}
/* End of program */