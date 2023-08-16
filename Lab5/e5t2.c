#include <stdio.h>

int calculate_modulo(int, int);

int main (void){
	int divident, divisor;
	printf("Enter divident: ");
	scanf(" %d", &divident);
	printf("Enter divisor: ");
	scanf(" %d", &divisor);
	printf("The modulo is %d\n", calculate_modulo(divident, divisor) );
	return 0;
}

int calculate_modulo(int dv, int ds){
	if (dv >= 0){
		return dv % ds;
	}
	int x = -1;
	int y;
	
	do {
	y = ds * x;
	x = x - 1;
	}
	while (y > dv);
	
	return dv - y;
}