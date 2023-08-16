#include <stdio.h>

int main(void){
	int x[5] = {1,2,3,4,5};
	int y[5] = {1,2,3,4,5};
	int z[5];
	int i;
	
	printf("z[5] = {");
	
	for (i = 0; i < 5; i++){
		*(z + i) = *(x + i) + *(y + i);
		if (i == 4){
			printf("%d}\n", z[i]);
			break;
		}
		printf("%d,", z[i]);
	}
	
	return 0;
}
