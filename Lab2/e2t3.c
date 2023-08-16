/* 
	Lab Experiment 2
	Task 3 
	
	This program to calculates by using <math.h>
	and display the value of the given expression
	
*/
	
#include <stdio.h>
#include <math.h>
#define PI 22/7

int main(void)
{
	/* Defining and Initializing Variables */
	float a = 10.0;
	float b = 5.0;
	float c = 15.0;
	float d = 20.0;
	float theta = 45.0*PI/180.0;
	
	/* Calculating answer */
	float ans = pow( pow( ((a/b)*sin(theta)) , (a/pow(b,2))) + (pow((b/a)*cos(theta) , (1/(a+b)) )) , 0.5) / ((c*tan(theta)) - (d/c));
    
	/* Printing Answer */ 
	printf("The answer is %f\n", ans);

  return 0;
}
/* End of program */
