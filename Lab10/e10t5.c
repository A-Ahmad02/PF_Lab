/* Experiment 10 Task 5 */
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
} Point;

void foo(Point* p1, Point* p2, double* a);

 int main(void){
	 
	 double dist; 
	 
	Point (*j) = (Point*)malloc(sizeof(Point));
	Point (*k) =  (Point*)malloc(sizeof(Point));
	
	if ((j == NULL) || (k == NULL)){
		fprintf(stderr, "Error in memory allocation");
		exit(1);
	}
	
	(*j).x = 1;
	(*j).y = 1;
	
	(*k).x = 2;
	(*k).y = 2;
	
	foo(j, k, &dist);
	
	printf("Distance between p1 and p2 is %f\n", dist);
	
	free(j);
	free(k);
	return 0;
}

void foo( Point* p1, Point* p2, double* a){
	(*a) =  sqrt(pow((*p1).x - (*p2).x, 2) + pow((*p1).y - (*p2).y, 2));
}