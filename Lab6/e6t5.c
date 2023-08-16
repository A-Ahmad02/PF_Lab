# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define MAX 5

void transfer(int array[],char* array2[], int len);
void swap(int array[], int n1, int n2);
void TransferSortAndPrint(int argc, char* argv[], int c);
void  MinimumElementSort(int array[], int num_elements);
void BubbleSort(int array[], int len);
void print_array(int array[], int len);

int main(int argc, char* argv[]){
	TransferSortAndPrint(argc, argv, MAX);
	return 0;
}

void TransferSortAndPrint(int argc, char* argv[], int c){
	int i;
	int k = 0;
	char SortAlgo = 'm';
	
	for (i = 1; i < argc; i++){
		if (!(strcmp(argv[i], "-b"))){
			SortAlgo = 'b';
		}
		else if (atoi(argv[i]) || (!strcmp(argv[i], "0"))){
			k++;
		}
		else if (!atoi(argv[i])){
			return;
		}
	}
	
	if (k < c){
		c = k;
	}
	
	int array[c];
	transfer(array, argv, argc-1);
	
	if (SortAlgo == 'm'){
		MinimumElementSort(array, c);
		printf("Minimum Element Sort:");
	}
	else {
		printf("Bubble Sort:");
		BubbleSort(array, c);
	}
	print_array(array,c);
}

void transfer(int array[],char *array2[],int len){
	int j = 0;
	for (int i = 0; i < len; i++){
		if (atoi(array2[i+1]) || (!strcmp(array2[i+1], "0"))){
			array[j] = atoi(array2[i+1]);
			j++;
		}
	}
}

void print_array(int array[], int num_elements){
	
	printf("The array elements after sorting are: ");
	for (int i = 0; i < num_elements; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");
}

void  MinimumElementSort(int array[], int num_elements){
	int start;
	int smallest; 
	int index;
	for (start = 0; start < num_elements; start++){
		smallest = start;
		for (index = start; index < num_elements; index++){
			if (array[index] < array[smallest]){
				smallest = index;
			}
		}
		swap(array,start,smallest);
	}
	
}

void swap(int array[], int n1, int n2){
	int i = array[n1];
	array[n1] = array[n2];
	array[n2] = i;
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