#include<stdio.h>

void main(){
	int x=10;
	int *iptr=&x;
	char *cptr=&x;

	printf("%p\n",&iptr);
	printf("%p\n",&cptr);

}
