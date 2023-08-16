/* Experiment 9 Task 2 */
	
#include <stdio.h>
#include <stdlib.h>

int* foo(void);

 int main(void){
	 
	int* x = foo();
	int i;

	
	for (i = 0; i < 5; i++){
		*(x + i) = i;
		printf("*(x + %d) = %d\n", i, *(x + i));
	}
	
	free(x);
	return 0;
}

int* foo(void){
	int* j = (int*) malloc(5*(sizeof(int*)));
	if (j == NULL){
		fprintf(stderr, "Error in memory allocation");
		exit(1);
	}
	return j;
}