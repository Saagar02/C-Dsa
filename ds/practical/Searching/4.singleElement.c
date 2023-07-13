#include<stdio.h>
int singleEle(int arr[],int size){
	int i=0;
	if(arr[0] != arr[1]){
		return arr[0];
	}else if(arr[size-1] != arr[size-2]){
		return arr[size-1];
	}else{
		while(i!=size-1){
			if(arr[i]!=arr[i+1]||arr[i]!=arr[i-1]){
				return arr[i];
			}
		}
	}
	return -1;
}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int retval = singleEle(arr,size);
	printf("single elemet is %d\n",retval);
}
