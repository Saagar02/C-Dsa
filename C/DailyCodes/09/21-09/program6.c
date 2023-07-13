#include<stdio.h>

void main(){
	int x=10;

	int *iptr=&x;
	int *iptr2=iptr;
	int **iptr3=iptr2;

	printf("%d\n",*iptr);
	printf("%d\n",*iptr2);
	printf("%d\n",**iptr3);

}
