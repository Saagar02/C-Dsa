/*WAP to take 1-D array from user and print second largest element of array */

#include<stdio.h>

void main(){
	int size;
	printf("Enter size of array \n");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter %d element of array \n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int temp = arr[0];
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	
	}
	printf("Second largest element in array is : %d\n",arr[size-2]);
}
