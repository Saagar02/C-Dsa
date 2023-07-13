/*WAP to create array of size n given by user and take value from user and print array using pointer .*/

#include<stdio.h>

void main(){
	int size;
	printf("Enter size of array:\n");
	scanf("%d",&size);
	
	printf("Enter %d elements\n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array elements are :\n");
	int *ptr = arr;	
	for(int i=0;i<size;i++){
		printf("%d\n",*(ptr+i));
	}	
	

}

