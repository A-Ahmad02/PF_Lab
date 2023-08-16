#include <stdio.h>

char* Print_Day(int q, int m, int y);
int calculate_modulo(int, int);

int main (void){
	int Y;
	while ( scanf("%d", &Y) != EOF){
		int G = calculate_modulo(Y, 19) + 1; /* Golden Year */
		int C = (Y / 100) + 1; /* Century */
		int X = (3 * C / 4) - 12; /* Skipped Leap Years */
		int Z = (((8 * C) + 5) / 25) - 5; /* Correction Factor */
		int D = (5 * Y / 4) - X - 10;
		int E = calculate_modulo(((11 * G) + 20 + Z - X), 30);
		if (((E == 25) && (G > 11)) || (E == 24) ){
			E++;
		}
		int N = 44 - E;
		if (N < 21){
			N += 30;
		}
		N = N + 7 - calculate_modulo((D + N), 7);
		if (N > 31){
			printf("%d - April %2d %s\n", Y, (N - 31), Print_Day((N - 31), 4, Y));
		}
		else{
		printf("%d - March %2d %s\n", Y, N, Print_Day(N, 3, Y));
		}
	}
}

char* Print_Day(int q, int m, int y){
	int J = y / 100;
	int K = y % 100;
	int day = calculate_modulo(((q+ (int)((m+1)*13/5) +K+ (int)(K/4) + (int)(J/4) - (2*J)) ), 7);
	char* days[10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	return days[day];
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