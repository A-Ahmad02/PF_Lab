# include <stdio.h>
# include <stdlib.h>

void transfer(int array[],char *array2[], int len);
void print_array(int array[], int len);

int main(int argc, char *argv[])
{
	int num_elements = argc - 1;
	int a[num_elements];
	transfer(a,argv,num_elements);
	print_array(a,num_elements);
	
	return 0;
}

void transfer(int array[],char *array2[],int len){
	for (int i = 0; i < len; i++){
		array[i] = atoi(array2[i+1]);
	}
}

void print_array(int array[], int len){
	printf("The array elements are: ");
	for (int i = 0; i < len; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");
}