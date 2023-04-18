#include<stdio.h>
#include<stdlib.h>
int partition(int arr[], int p, int r){
	int x = arr[r];
	int i = (p-1);
	int j=p;
	for( j; j <= r-1;  j++){
		if(arr[j] <= x){
			i++;
			int temp1 = arr[i];
			arr[i] = arr[j];
			arr[j] =  temp1; 
			}		
	}
	int temp2 = arr[i+1];
	arr[i+1] = arr[r];
	arr[r]  = temp2;
	return (i+1);
}

void Quicksort(int arr[], int p, int r){
	if(p < r){
		int q = partition(arr , p, r);
		Quicksort(arr, p , q - 1);
		Quicksort(arr, q + 1, r);
	}
}

void printarray(int arr[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
//	printf("Enter the number of element you want sort. ");
//	scanf("%d", &n);
	
//	for(int i = 0; i < n; i++){
//		printf("Enter the arr[%d]th number: ",i);
//		scanf("%d",&arr[i]);
//	}
//	
	Quicksort(arr, 0 ,n-1);
	printf("Your sorted array is:- \n");
	printarray(arr,n);
}