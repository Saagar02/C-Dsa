#include<stdio.h>

void  main(){
	int x=10;

	int *iptr= &x;
	void *vptr=&x;

	printf("%p\n",iptr);	//100
	printf("%p\n",vptr);	//100
	printf("%d\n",*iptr);	//10
	printf("%d\n",*vptr);	//Error:Invalid use of void expression.


}
