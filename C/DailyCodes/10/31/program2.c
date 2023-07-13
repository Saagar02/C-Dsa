#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr = (int *)malloc(sizeof(int));

	*ptr = 50;

	int *ptr1=ptr;

	free(ptr1);

	printf("%d",*ptr);


}
