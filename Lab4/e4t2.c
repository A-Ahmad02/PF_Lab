/* 
	Lab Experiment 4
	Task 1
	
	This program  
*/

#include <stdio.h>

int main(void){
  int x;
  for (x = 5; x >= 1; x--){
	  printf("%d book(s) on C on the shelf\n", x);
	  if (x == 1){
		 printf("Take one down, pass it around, no more books.\n");
		 break;
	  }
	  printf("Take one down, pass it around, %d books left\n", x-1);
  }
  return 0;
}

/*
int main(void){
  int x;
  for (x = 5; x >= 1; x--){
	  printf("%d book(s) on C on the shelf\n", x);
	  if (x != 1){
		 printf("Take one down, pass it around, %d books left\n", x-1);
	  }
	  else {
		  printf("Take one down, pass it around, no more books.\n");
	  }
	  
  }
  return 0;
}
*/