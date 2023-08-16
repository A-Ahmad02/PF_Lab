# include <stdio.h>

void swap(int array[], int n1, int n2);
void print_array(int array[], int len);

int main(void)
{
	int a[9] = {5,9,-2,150,-95,23,2,5,80};
	
	swap(a,3,5);
	print_array(a,9);
	
	return 0;
}

void swap(int array[], int n1, int n2){
	int i = array[n1];
	array[n1] = array[n2];
	array[n2] = i;
}
void print_array(int array[], int len){
	printf("The elements of the array are: ");
	for (int i = 0; i < len; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");
}