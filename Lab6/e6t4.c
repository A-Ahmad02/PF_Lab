# include <stdio.h>
# include <stdlib.h>

void transfer(int array[],char* array2[], int len);
void swap(int array[], int n1, int n2);
void BubbleSort(int array[], int len);
void print_array(int array[], int len);

int main(int argc, char* argv[])
{
	int num_elements = argc - 1;
	int array[num_elements];
	transfer(array, argv, num_elements);
	BubbleSort(array, num_elements);
	print_array(array, num_elements);
	
	return 0;
}

void BubbleSort(int array[], int len){
	int s, i;
	do{
		s = 0;
		for (i = 0; i < len; i++){
			if (array[i] > array[i+1]){
				swap(array, i, i+1);
				s = 1;
			}
		}
	}
	while(s != 0);
}

void transfer(int array[],char *array2[],int len){
	for (int i = 0; i < len; i++){
		array[i] = atoi(array2[i+1]);
	}
}

void swap(int array[], int n1, int n2){
	int i = array[n1];
	array[n1] = array[n2];
	array[n2] = i;
}

void print_array(int array[], int len){
	printf("The array elements are: ");
	for (int i = 0; i < len; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");
}