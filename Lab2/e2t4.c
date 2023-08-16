/* 
	Lab Experiment 2
	Task 4 
	
	This program to calculates and 
	display the value of the given expression
*/
	
#include <stdio.h>
#include <math.h>
#define PI 22/7

int main(void)
{
	float A, f, t, p, v; /* Defining Variables */

	printf("Enter A: ");
	scanf("%f", &A); /* Initializing A */

	printf("Enter f: ");
	scanf("%f", &f); /* Initializing f */

	printf("Enter t: ");
	scanf("%f", &t); /* Initializing t */

	printf("Enter p in degrees: ");
	scanf("%f", &p); /* Initializing p */

	/* Calculating and Displaying Answer */
	v = A * sin((2*PI*f*t) + (p*PI/180));
    printf("v = %f\n", v);
	
	return 0;
}
/* End of program */
