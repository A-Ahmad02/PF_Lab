# include <stdio.h>
void add(int* i, int* j);

int main(){
	int x = 1;
	int y = 2;
	
	add(&x, &y);
	printf("The sum is %d\n", x);
	
	return 0;
}

void add(int* i, int* j){
	(*i) = ((*i)+(*j));
}