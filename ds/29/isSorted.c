#include<stdio.h>
#include<stdbool.h>
bool isSorted(int arr[],int size){
	if(size ==0 && arr[0]<=arr[1]){
		return true;
	}
	if(arr[size]>arr[size-1] && isSorted(arr,size-1)){
		return true;
	}else{
		return false;
	}
}

/*bool isSorted(int arr[],int size){
	if(arr[size]<arr[size-1]){
		return false;
	}
	if( size ==0 && isSorted(arr,size-1)){
		return true;
	}
}*/
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	bool retval = isSorted(arr,size-1);
	if(retval == true){
		printf("Array is sorted\n");
	}else{
	
		printf("Array is not sorted\n");
	}
}
