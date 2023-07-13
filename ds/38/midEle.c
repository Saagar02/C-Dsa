#include<stdio.h>
void swap(int *ptr1 ,int *ptr2){
	int temp = *ptr1;
	*ptr1=*ptr2;
	*ptr2 = temp;

}
int position(int arr[],int start,int end){

	int pivot = arr[end];
	int itr1= start-1;
	for(int i=start ;i<end;i++){
		if(arr[i]<pivot){
			itr1++;
			swap(&arr[i],&arr[itr1]);
		}
	}
	swap(&arr[itr1+1],&arr[end]);
	return itr1+1;
}
int *quickSort(int arr[],int start,int end){
	if(start<end){
		int pivot = position(arr,start,end);
		quickSort(arr,start,pivot-1);
		quickSort(arr,pivot+1,end);
	}

}
void main(){
	int size =8;
	int start =0;
	int end = size-1;
	int arr[] = {-1,3,8,-6,7,-22,11,4};
	quickSort(arr,start,end);
	int midEle = arr[(start+end)/2];
	printf("mid Element = %d\n",midEle);
}
