#include <stdio.h>

int main(void){
	int x[5] = {1,2,3,4,5};
	int i;
	
	printf("1234567890123456789012345679012\n");
	printf("%7s%8s%17s\n", "Element", "Value", "Address");
	
	for (i = 0; i < 5; i++){
		printf("%5s%d]%8d%17p\n", "x[", i, x[i], &x[i]);
	
	}
	
	return 0;
}