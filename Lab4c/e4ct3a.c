#include <stdio.h>

int main(void){
  int x, y;
  int i = 1;
  int power = 1;

  printf("Enter first integer: ");
  scanf(" %d", &x);
  printf("Enter second integer: ");
  scanf("%d", &y);

  while (y >= i){
    power *= x;
    i++;
  }
  printf("%d to the power of %d is %d\n", x, y, power);
  return 0;
}
