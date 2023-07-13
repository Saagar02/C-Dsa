#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter %d elements : ",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Missing elements are : ");	
	for(int j=0;j<size;j++){
		for(int i=arr[j]+1;i<arr[j+1];i++){
			printf("%d ",i);	
		}
	}
	printf("\n");
}
