#include<stdio.h>
#include <stdlib.h>
//selection sort

void swap(int* x, int* y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void sort(int* arr, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(*(arr + i) > *(arr + j)){
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

int main(){
	int arr[10] = {0};
	int n = sizeof(arr) / sizeof(int);
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 100;
	}
	
	printf("정렬 전 \n");

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	sort(arr, n);

	printf("\n정렬 후 \n");
 
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}