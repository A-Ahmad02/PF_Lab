/* 
	Lab Experiment 4
	Task 1
	
	This program 
*/

#include <stdio.h>

int main(void){
  int x;
  printf("12345678901234567890123\n");
  printf("%7s%9s%7s\n", "Integer", "Square", "Cube");
  for (x = 1; x <= 5; x++){
	  printf("%7d%9d%7d\n", x, x*x, x*x*x);
  }
  return 0;
}
