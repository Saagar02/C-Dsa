#include<stdio.h>

void main(){
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int temp = 0;
	for(int i=0;i<size;i++){	
		for( int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				
			}
		}
		
	}

		printf("After array sort:\n");
		for (int i = 0; i<size; i++) {
			printf("%d\n",arr[i]);
		}

}
