#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter %d elements : \n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		printf("Count of %d is : %d \n",arr[i],count);
	}

}
