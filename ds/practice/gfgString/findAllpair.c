#include<stdio.h>

void getSorted(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void binarySearch(int arr1[], int arr2[],int start, int end,int key){
	int size = sizeof(&arr1)/sizeof(int);
	for(int i=0;i<size;i++){
		while(start<end){
			int  mid = (start+end)/2;
			if((arr2[mid]+arr1[i])==key){
				printf("(%d,%d)",i,mid);
			}else{
				if((arr2[mid]+arr1[i])>key){
					end = mid-1;
				}else{
					start = mid+1;
				}
			}

		}
	}
}
void main(){
	int size;	
	int size2;
	printf("Enter the size of array1 and array2\n");
	scanf("%d%d",&size,&size2);
	int arr1[size];int arr2[size2];
	printf("Enter the element of first array :\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the element of second array :\n");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	int key;
	printf("Enter the key element :");
	scanf("%d",&key);
	int start =0;
	int end = size2-1;
	getSorted(arr1,size);
	getSorted(arr2,size2);
	binarySearch(arr1,arr2,start,end,key);

}
