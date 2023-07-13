#include<stdio.h>
#include<stdlib.h>

void main(){
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int *arr = (int *)malloc(sizeof(int)*size);
	printf("Enter %d elemets :\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter index from where you want to rotate elemets\n");
	int d;
	scanf("%d",&d);
	int *ptr1 = &(arr[d]);
	int *arr2 = (int *)malloc(sizeof(int)*size);
	int *ptr2 = arr2;
	for(int i=0;i<size;i++){
		if(d==size){
			ptr1 = &(arr[0]);
		}
		*ptr2  = *ptr1;
		d++;
		ptr2++;
		ptr1++;
	}
	ptr1 = arr;
	arr = arr2;
	arr2 = ptr1;
	for(int i=1;i<size;i++){
		free(arr2+i);
	}
/*	free(ptr1);
	free(arr2);
	free(ptr2);*/
	for(int i=0;i<size;i++){
		printf("|%d|",arr[i]);
	}
}
