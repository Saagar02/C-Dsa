/*						Bubble Sort 							*/
#include<stdio.h>

void main(){
	int size = 10;
	int arr[] = {10,-21,33,4,84,76,32,11,5,0};
	int k =0;
	for(int i=0; i<size; i++){
		for(int j=0; j<size-1-i ;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("after sorting [");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	
	}
	printf("]\n");
}
