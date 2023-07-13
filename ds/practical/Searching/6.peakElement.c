#include<stdio.h>
int peakEle(int arr[],int size){
	int store = arr[0];
	while(size !=-1){
		if(arr[size]>store){
			store = arr[size];
		}
		size--;
	}
	return store;
}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int retval = peakEle(arr,size-1);
	printf("Peak Element = %d\n",retval);
}
