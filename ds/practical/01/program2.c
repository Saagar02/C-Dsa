/*WAP to dynamically allocate 1D array of marks, take value from user and printf it [use malloc]*/

#include<stdio.h>
#include<stdlib.h>
void main(){
	int size;
	printf("Enter the size \n");
	scanf("%d",&size);
	int *iptr = (int *)malloc(size*sizeof(size));

	for(int i=0;i<size;i++){
		scanf("%d",iptr+i);
	}
	printf("Array Elements");
	for(int i=0;i<size;i++){
		printf("%d\n",*(iptr+i));
	}


}
