
#include<stdio.h>

void main(){

	int x =10,y=20,z=30;

	int *ptr = &x;

	printf("%d\n",*ptr++);
	printf("%d\n",++(*ptr));
}
