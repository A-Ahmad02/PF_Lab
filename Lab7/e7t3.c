# include <stdio.h>
void add(int* i, int* j);

int main(){
	int x = 1;
	int y = 2;
	
	add(&x, &y);
	
	return 0;
}

void add(int* i, int* j){
	printf("The sum is %d\n", ((*i)+(*j)));
}