#include <stdio.h>

void Print_Day(int, int, int);
int calculate_modulo(int);

int main (void){
	int q, m, y;
	printf("Enter date: ");
	scanf("%d%d%d", &q, &m, &y);
	printf("The day is ");
	Print_Day(q, m, y);
	return 0;
}

void Print_Day(int q, int m, int y){
	int J = y / 100;
	int K = y % 100;
	int day = calculate_modulo((q+ (int)((m+1)*13/5) +K+ (int)(K/4) + (int)(J/4) - (2*J)) );
	char days[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	printf("%s\n", days[day]);
}

int calculate_modulo(int dv){
	if (dv >= 0){
		return dv % 7;
	}
	int x = -1;
	int y;
	do {
	y = 7 * x;
	x = x - 1;
	}
	while (y > dv);
	return dv - y;
}