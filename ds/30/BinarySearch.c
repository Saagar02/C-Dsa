#include<stdio.h>
int BinarySearch(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid] == key){
			return mid;
		}else{
			if(key<arr[mid]){
				end = mid-1;
			}
			if(key>arr[mid]){
				start = mid+1;
			}
		}
	}
	return -1;
}
void main(){
	int size = 10;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};;
	int key;
	printf("Enter the number you want to search :");
	scanf("%d",&key);
	int index = BinarySearch(arr,size,key);
	if(index !=-1){
		printf("%d is present at index no %d\n",key,index);
	}else{
		printf("%d is not present in array \n",key);
	}
}
