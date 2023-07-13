#include <stdio.h>

void main(){

	int size,temp=0;
	printf("Enter the size of Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter %d elements : ",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size/2;i++){
		temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}

	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
