/* 		Program1
 *  		Topic : Array of Pointer
 *
 *  		1. Array of pointer store the address of element.
 *  		2. Instead of Addressing Array of pointers , call array of void pointers.
 *  		3. Size of array of pointer is always 8 byte.
 */

#include<stdio.h>

void main(){
	int x=10;
	int y=20;
	int z=30;

	int *arr[3]={&x,&y,&z};

	printf("%p\n",arr[0]);	//100
	printf("%p\n",arr[1]);	//104
	printf("%p\n",arr[2]);	//108

	printf("%d\n",*arr[0]);	//10
	printf("%d\n",*arr[1]);	//20
	printf("%d\n",*arr[2]);	//30

}

