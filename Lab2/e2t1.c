/* 
	Lab Experiment 2
	Task 1 
	
	This program takes input of cow legs counted
	Then calculates and displays the number of cows implied
*/

#include <stdio.h>

int main (void)
{
  int cows, legs; /* Defining Variables */
  printf("How many cow legs did you count?\n");
  scanf("%d", &legs); /* Taking input */
  cows = legs / 4; /* Initializing Variable */
  printf("That implies there are %d cows.\n", cows);
  return 0;
}
/* End of program */
