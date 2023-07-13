#include<stdio.h>

int binarySearch(int arr[],int start,int end,int key){
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==key){
			return mid;
		}else{
			if(arr[mid]>key){
				end = mid-1;
			}else{
				start = mid +1;
			}
		
		}
	}
	return -1;
}
void main(){
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the %d elements\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int key;
	printf("Enter the number you want to search in array :");
	scanf("%d",&key);
	int start = 0;
	int end = size-1;
	int retval = binarySearch(arr,start,end,key);
	if(retval ==-1){
		printf("Element not found\n");
	}else{
		printf("Element is present at index no %d\n",retval);
	}


}
