#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr = (int *)malloc(sizeof(int));
	*ptr =50;
	printf("%p\n",ptr);	//0x100
	printf("%d\n",*ptr);	// 50
	free(ptr);

}
