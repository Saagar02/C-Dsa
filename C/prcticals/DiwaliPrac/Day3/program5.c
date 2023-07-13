/* 5) WAP to create array of size n given by user and take the balue from user 
 * sort the array in ascending order and print the sorted array. */

#include<stdio.h>

void main(){
	int size;
	printf("Enter size of array:\n");
	scanf("%d",&size);
	int arr[size];

	printf("Enter array elements\n");	
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int temp = 0;

	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		
		}
	
	}
	printf("Sorted Array :\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}	

}
