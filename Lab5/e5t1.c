#include <stdio.h>

int add (int, int);
void diff (int, int);
int prod (void);
void div (void);

int main (void){
	int s;
	s = add(1,2);
	printf("The sum is %d\n", s);
	diff(1,2);
	printf("The product is %d\n", prod());
	div();
	return 0;
}

int add (int x, int y){
	return x+y;
}

void diff (int x, int y){
	printf("The difference is %d\n", x-y);
}

int prod (void){
	return 1*2;
}

void div (void){
	printf("1/2 = %f\n", (float)1/2);;
}