#include <stdio.h>

int main(void){
  int x, y;
  int i;
  int power = 1;

  printf("Enter first integer: ");
  scanf(" %d", &x);
  printf("Enter second integer: ");
  scanf("%d", &y);

  for (i = 1; y >= i; i++){
    power *= x;
  }
  printf("%d to the power of %d is %d\n", x, y, power);
  return 0;
}
