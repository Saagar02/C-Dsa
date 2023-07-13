#include<stdio.h>
int x =0;
int *iptr;
void fun(){
	 int y =0;
	 iptr =&y;
}
void main(){

	// 1.void pointer // Pointer whose return type is void is called void pointer .
	int x =100;
	void *ptr;
	ptr =&x;
	printf("%d\n",*(int *)ptr);

	// 2.Null pointer // Poiter which look towards 0/NULL address is called null pointer .
	int *ptr1= NULL;
	//printf("%d",*ptr); here we get error 

	// 3.Wild pointer
	int *ptr22;	// Pointer which does not look towards / have any adress is called wild pointer.
	
	// 4.Dangling pointer
	fun();
	printf("%d",*iptr);	
	
}
