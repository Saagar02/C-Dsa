#include<stdio.h>

void main(){
	int x=10;
	int *iptr;	//wild pointer.
	printf("%d\n",*iptr);

	int*vptr=0;	//Null pointer.
	printf("%d\n",*vptr);
}
