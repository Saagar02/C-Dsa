/*						Bubble Sort 							*/
#include<stdio.h>

void main(){
	int size = 10;
	int arr[] = {10,-21,33,4,84,76,32,11,5,0};
	
	for(int i=0;i<size-1; i++){
		int minIndex = i;
		for(int j=i+1; j<size;j++){
			if(arr[minIndex]>=arr[j]){
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	
	printf("after sorting [");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	
	}
	printf("]\n");
}
