#include<stdio.h>

int* merge(int arr[],int start,int mid ,int end){
	int ele1 = mid-start+1;
	int ele2 = end - mid;
	int arr1[ele1];
	int arr2[ele2];

	for(int i=0;i<ele1;i++){
		arr1[i] = arr[start+i];
	}
	for(int i=0;i<ele2;i++){
		arr2[i] = arr[mid+1+i];
	}
	int itr1 =0;int itr2=0;int itr3=start;
	while(itr1<ele1 && itr2<ele2){
		if(arr1[itr1]<arr2[itr2]){
			arr[itr3] = arr1[itr1];
			itr1++;
		}else{
			arr[itr3] = arr2[itr2];
			itr2++;
		}
		itr3++;
	}
	while(itr1<ele1){
		arr[itr3] = arr1[itr1];
		itr1++;
		itr3++;
	}
	while(itr2<ele1){
		arr[itr3] = arr2[itr2];
		itr2++;
		itr3++;
	}
	return arr;
}
int* mergeSort(int arr[],int start , int end){

	int mid;

	if(start<end){
		mid = (start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
	return arr;
}
void main(){
	int size =0;
	printf("Enter the size array :");
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d elements of array :\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int start = 0;
	int end = size-1;
	mergeSort(arr,start,end);
	printf("After Sorting :\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}
