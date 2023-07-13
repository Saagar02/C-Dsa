#include<stdio.h>

void inPlacePrefix(int arr[],int size){
	int temp[size];
	temp[0]=arr[0];
	for(int i=1;i<size;i++){
		temp[i] = temp[i-1]+arr[i];
	}
	for(int i=0;i<size;i++){
		printf("%d  ",temp[i]);
	}	
}
void main(){
	int size;
	printf("Enter the size of array \n");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	inPlacePrefix(arr,size);

}
