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
	int temp=0,i=0,j=0;
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(arr[i]>arr[j]){
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}
		}
	}

	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
