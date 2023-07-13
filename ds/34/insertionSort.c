#include<stdio.h>
int *insertionSort(int arr[] , int size){
	int val;
	for(int i=1;i<size;i++){
		val=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>val){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
	}

}
void main(){
	int arr[10] ={3,25,47,1,-3,5,56,3,5,-23};
	insertionSort(arr,10);
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
}
