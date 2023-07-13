/*WAP to create 1-D array of length n from user and also take value from user 
 * and print whole 1-D array */

#include<stdio.h>

void main(){
	int size;
	printf("Enter size of array \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array element\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array elements are :\n");	
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}

}
