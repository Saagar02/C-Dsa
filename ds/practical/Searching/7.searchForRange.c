#include<stdio.h>
int* singleEle(int arr[],int size,int key,int arr2[]){
	int start =0;
	int end = size-1;
	int mid =0;
	int flag =0;
	int *ptr = arr;

	while(start<=end){
		mid = (start+end)/2;
		printf("mid = %d\n",mid);
		if(arr[mid]==key){
			printf("In 1st if mid = %d \n",arr[mid]);
			flag =1;
			if(arr[mid]==arr[mid-1]){
				arr2[0]=mid-1;
				arr2[1]=mid;
			}else if(arr[mid]==arr[mid+1]){	
				printf("In ifelse\n");
				arr2[0]=mid;
				arr2[1]=mid+1;
			}else{	
				printf("In else\n");
				arr2[0]=-1;
				arr2[1]=-1;
			}
			printf("[%d %d]\n",arr2[0],arr[1]);
			return ptr;
		}else{
			if(arr[mid]<key){
				printf("In 2nd if\n");
				start = mid+1;
			}else{
				printf("Else\n");
				end = mid-1;
			}
		}
	}
	printf("[%d %d]\n",arr2[0],arr[1]);
	return ptr;
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
	int arr2[2];
	arr2[0]=100;
	arr2[0]=200;
	int *retval = singleEle(arr,size,target,arr2);
	printf("[");
	for(int i=0;i<2;i++){
		printf("%d ",*(retval+i));
	}
	printf("]\n");
}
