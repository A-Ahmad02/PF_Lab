# include <stdio.h>

int main(){
	int x = 1;
	int y = 2;
	
	int* i = &x;
	int* j = &y;
	
	printf("The sum is %d\n", ((*i)+(*j)));
	
	return 0;
}