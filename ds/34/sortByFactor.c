#include<stdio.h>
int factor(int no){
	int count  = 1;
	for(int i=1;i<=no/2;i++){
		if(no%i==0){
			count++;
		}
	}
	return count;

}
void bubbleSort(int arr[], int size){
	
	for(int j=0;j<size;j++){
		for(int i= 0;i<size-1;i++){
			if(factor(arr[i])>factor(arr[i+1])){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}else if(arr[i]>arr[i+1]){	
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	printf("After Sorting : [ ");
	for(int i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	printf("]\n");

}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before Sorting : [ ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("]\n");
	bubbleSort(arr,size);
}
