#include<stdio.h>

int* merge(int arr[],int start,int mid ,int end){
	int arr1[end-start+1];
	int itr1 = start;
	int itr2 = mid+1;
	for(int i=0;itr1 <= mid || itr2 <= end;i++){
		if(itr1 > mid){
			arr1[i] = arr[itr2];
			itr2++;
		}else if(itr2 > end){
			arr1[i] = arr[itr1];
			itr1++;
		}else{
			if(arr[itr1]<=arr[itr2]){
				arr1[i] = arr[itr1];
				itr1++;
			}else{
				arr1[i] = arr[itr2];
				itr2++;
			}
		}	
	}
	int i=0;
	for(int j=start;j<=end;j++){
		arr[j] = arr1[i];
		i++;
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
