# include <stdio.h>
int* foo1(int* x);
int foo2(int* x);

int main(){
	int i = 1;
	
	printf("The address of i is %p\n", foo1(&i) );
	printf("The value of i is %d\n", foo2(&i) );
	
	return 0;
}

int* foo1(int* x){
	return x;
}

int foo2(int* x){
	return *x;
}