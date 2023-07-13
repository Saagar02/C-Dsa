#include<stdio.h>

void main(){
	int x=10;
	printf("%d\n",x);
	printf("%p\n",&x);
	printf("%d\n",&x);

	int *ptr=&x;
	printf("%p\n",ptr);
	printf("%p\n",&ptr);



}
