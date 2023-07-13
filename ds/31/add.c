#include<stdio.h>
int flag =0;
int floreValue (int arr[],int size,int key){
	if(key<arr[0]){
		flag = 1;
		return -1;
	}
	if(key>arr[size-1]){
		return arr[size-1] ;
	}
	int start = 0;
	int end = size-1;
	int store = -1;
	while(start<=end){
		int mid = (start+end)/2;

		if(arr[mid]==key){
			return mid;
		}else{
			if(arr[mid]<key){
				store = mid;
				start =  start+1;		
			}else{
				end = end-1;
			}
		}
	}
	return store+1;
}
void main(){
	printf("Enter the size of array :");
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int key;
	printf("Enter the elemet you want to search :");
	scanf("%d",&key);

	int retval = floreValue(arr,size,key);
       	if(flag == 1){
		printf("Flore value does not exist\n");
	}else{	
		printf("Flore Value = %d\n",retval);
	}
}
