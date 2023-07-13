#include<stdio.h>
int singleEle(int arr[],int size,int target){
	int start =0;
	int end = size-1;
	int mid =0;
	int store = -1;

	while(start<=end){
		mid = (start+end)/2;
		if(target == arr[mid]){
			return mid;
		}
		if(arr[mid]<target){
			store = mid;
			start = mid+1;
		}else{
			end = mid-1;
		}
	}
	return (store+1);
}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int target;
	printf("Enter target element :");
	scanf("%d",&target);
	int retval = singleEle(arr,size,target);
	printf("Index no = %d\n",retval);
}
