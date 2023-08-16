#include <stdio.h>

int main(void){
	int x[5] = {1,2,3,4,5};
	int i;
	int sum= 0;
	
	for (i = 0; i < 5; i++){
		sum += *(x + i);
	}
	
	printf("The sum is %d\n", sum);
	
	return 0;
}