#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr1 = (int *)calloc(8,sizeof(int));
	printf("Enter 8 values\n");
	for(int i=0;i<8;i++){
		scanf("%d",ptr1+i);
	}
	printf("calloc values (ptr1) :\n");

	for(int i=0;i<8;i++){
		printf("%d\n",*(ptr1+i));
	}
	int *ptr2 = (int *)realloc(ptr1,16);

	for(int i=8;i<18;i++){
		scanf("%d",ptr2+i);
	}
	printf("Realloc values (ptr2):\n");
	
	printf("Enter next 8 values\n");
	for(int i=8;i<16;i++){
		printf("%d\n",*(ptr2+i));
	}

	free(ptr1);
	printf("Ptr2 value after free(ptr1)");

	for(int i=0;i<16;i++){
		printf("%d\n",*(ptr2+i));
	}



}
