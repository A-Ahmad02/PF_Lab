/* Experiment 9 Task 4 */
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* foo(int k);

 int main(int argc, char* argv[]){
	srand(time(0));
	int i;
	int k = atoi(argv[1]);
	char* x = foo(k);
	char random[] = {'*', '.'};
	
	for (i = 0; i < k; i++){
			x[i] = random[rand() % 2];
			printf("%c", x[i]);
			
	}
	puts("");
	
	free(x);
	return 0;
}

char* foo(int k){
	char* j = (char*) calloc((sizeof(char*)), k);
	if (j == NULL){
		fprintf(stderr, "Error in memory allocation");
		exit(1);
	}
	return j;
}