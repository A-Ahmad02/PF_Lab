/* Experiment 10 Task 2 */
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
} Point;

 int main(void){
	 
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
	
	double dist =  sqrt(pow((*k).x - (*j).x, 2) + pow((*k).y - (*j).y, 2));
	printf("Distance between p1 and p2 is %f\n", dist);
	
	free(j);
	free(k);
	return 0;
}
