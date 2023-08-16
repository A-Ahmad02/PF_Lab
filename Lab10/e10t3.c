/* Experiment 10 Task 3 */
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
} Point;

double foo(Point p1,Point p2);

 int main(void){
	 
	Point p1;
	Point p2;
	
	p1.x = 1;
	p1.y = 1;
	
	p2.x = 2;
	p2.y = 2;
	
	printf("Distance between p1 and p2 is %f\n", foo(p1,p2));
	
	return 0;
}

double foo(Point p1,Point p2){
		double dist =  sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	return dist;
}