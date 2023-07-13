#include<stdio.h>
int *swap(int *ptr1 , int *ptr2){
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int position(int arr[],int start,int end){
	int i=start-1;
	int j = end+1;
	int pivot = arr[start];
	while(1){
		do{
			i++;
		}while(arr[i]<pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i>=j){
			return j;
		}
		swap(&arr[i],&arr[j]);
	}
}
int *quickSort(int arr[] ,int start,int end){
	if(start<end){
		int pivot = position(arr,start,end);
		quickSort(arr,start,pivot-1);
		quickSort(arr,pivot+1,end);
	}
	return arr;
}
void main(){
	int size =10;
	int arr[]={1,22,-1,5,8,-6,-11,-3,-7,11};
	int start =0;
	int end = size-1;
	quickSort(arr,start,end);
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
