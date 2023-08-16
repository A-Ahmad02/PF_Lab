# include <stdio.h>

void  Minimum_Element_Sort(int array[], int num_elements);
void swap(int array[], int n1, int n2);
void print_array(int array[], int num_elements);

int main(void)
{
	int array[9] = {5,9,-2,150,-95,23,2,5,80};
	
	Minimum_Element_Sort(array, (sizeof(array)/4));
	print_array(array, (sizeof(array)/4));
	
	return 0;
}

void  Minimum_Element_Sort(int array[], int num_elements){
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

void print_array(int array[], int num_elements){
	printf("The array elements after sorting are: ");
	for (int i = 0; i < num_elements; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");
}