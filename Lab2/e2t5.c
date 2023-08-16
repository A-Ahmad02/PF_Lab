/* 
	Lab Experiment 2
	Task 5
	
	This program requests the download speed in Mbs 
	and the size of a file in MB
	Then it calculates and displays the download time for the file
*/

#include <stdio.h>

int main(void)
{
	/* Defining and Initializing Variables */
	float down_speed = 18.120001;
	float file_size = 2.2;
	
	/* Calculating answer */
	float time_taken = (file_size/down_speed)*8;
	
	/* Displaying Answer */ 
	printf("At %f Mbs, a file of %f MB downloads in %f seconds.", down_speed, file_size, time_taken);
	
	return 0;
}
/* End of program */
