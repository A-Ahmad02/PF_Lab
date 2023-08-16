#include <stdio.h>
int main(void) {
	char a;
	int f, x;
	
	printf("Have you passed FSc Exams? (Y/N):");
	scanf("%c", &a);
	
	if (a == 'Y' || a == 'y'){
		printf("FSc Marks?:");
		scanf("%d", &f);
		printf("Enter Test Marks?:");
		scanf("%d", &x);
		
		printf("Your percentage is %f\n", (float)0.7*f/11 + (float)0.3*x/4);
		
		if (x > 80 && f > 900){
			puts("You are admitted to EE Dept");
		}
		else{
			puts("Sorry you cant be admitted to EE Dept");
		}
	}
	else{
		puts("Program ends here");
		}
	return 0;
}