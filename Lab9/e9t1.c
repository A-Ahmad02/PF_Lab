/* Experiment 9 Task 1 */
	
#include <stdio.h>
#include <stdlib.h>

 int main(void){
	 
	int* j = (int*) malloc(5*(sizeof(int*)));

	if (j == NULL){
		fprintf(stderr, "Error in memory allocation");
		exit(1);
	}
	for (int i = 0; i < 5; i++){
		j[i] = i;
		printf("j[%d] = %d\n", i, j[i]);
	}
	
	free(j);
	return 0;
}