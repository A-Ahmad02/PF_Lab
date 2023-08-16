/* 
	Lab Experiment 4
	Task 1
	
	This program calculates the GPA 
	when given the Grade points and Credit hours
*/

#include <stdio.h>
#include <string.h>
int main(void){
	
	int no_subjects; 		/* Number of subjects */
	int i; 					/* Iterator for for loop */
	int total_CH = 0; 		/* Sum of credit hours */
	float total_GP = 0; 	/* Sum of (grade points * credit hours) */
	
	printf("Enter No. of subjects: ");
	scanf("%d", &no_subjects);
	
	for (i = 1; i <= no_subjects; i++){
		int CH;
		char G[2];
		printf("Enter credit hour and grade of subject %d: ", i);
		scanf(" %d %s", &CH, G);
		
		/* Calculate the new Sum of credit hours */
		total_CH += CH;
		
		/* Check what grade he got in that subject and
		Calculate the new Sum of (grade points * credit hours)*/
		if ( (!strcmp(G, "A+")) || (!strcmp(G, "A")) ){
			total_GP += (CH * 4.0);
		}
		else if (!strcmp(G, "A-")){
			total_GP += (CH * 3.7);
		}
		else if (!strcmp(G, "B+")){
			total_GP += (CH * 3.3);
		}
		else if (!strcmp(G, "B")){
			total_GP += (CH * 3.0);
		}
		else if (!strcmp(G, "B-")){
			total_GP += (CH * 2.7);
		}
		else if (!strcmp(G, "C+")){
			total_GP += (CH * 2.3);
		}
		else if (!strcmp(G, "C")){
			total_GP += (CH * 2.0);
		}
		else if (!strcmp(G, "C-")){
			total_GP += (CH * 1.7);
		}
		else if (!strcmp(G, "D+")){
			total_GP += (CH * 1.3);
		}
		else if (!strcmp(G, "D")){
			total_GP += (CH * 1.0);
		}
		
	}
	
	printf("GPA = %.3f\n", (float)total_GP/total_CH); /* Calculate and display the GPA */
	
	return 0;
}
