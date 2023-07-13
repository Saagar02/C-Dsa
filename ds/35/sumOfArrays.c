#include<stdio.h>
int size = 4;
int *sumOfArray(int arr1[size],int arr2[size],int arr3[size],int size){
	for(int i=0;i<size;i++){
		arr3[i] = arr1[i]+arr2[i];
	}
	return ar;
}
void main(){
	int arr1[] = {8,5,3,7};
	int arr2[] = {2,10,4,6};
	int arr3[size];
	sumOfArray(arr1,arr2,arr3,size);
	for(int i=0;i<size;i++){
		printf("%d\n",arr3[i]);
	}

}
