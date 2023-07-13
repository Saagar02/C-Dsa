#include<stdio.h>
int sum(int arr[],int size){
	if(size==0){
		return arr[size];
	}
	return arr[size]+sum(arr,size-1);
}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array Elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int retval = sum(arr,size);
	printf("%d\n",retval);
}
