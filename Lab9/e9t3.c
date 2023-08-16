/* Experiment 9 Task 3 */
	
#include <stdio.h>
#include <stdlib.h>

int* foo(int k);

 int main(int argc, char* argv[]){
	 
	 int i;
	int k = atoi(argv[1]);
	int* x = foo(k);

	
	for (i = 0; i < k; i++){
		if ( atoi(argv[i + 2]) || (argv[i + 2] == "0")){
				x[i] = atoi(argv[i + 2]);
				printf("x[%d] = %d\n", i, x[i]);
			}
	}
	
	free(x);
	return 0;
}

int* foo(int k){
	int* j = (int*) calloc((sizeof(int*)), k);
	if (j == NULL){
		fprintf(stderr, "Error in memory allocation");
		exit(1);
	}
	return j;
}