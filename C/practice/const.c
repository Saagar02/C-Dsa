#include<stdio.h>

int* iptr;
int x;
void fun(){
	const int a=12;
	const x=a;
	printf("%d %d \n",a,x);
}
void main(){

	*iptr=30;
	printf("%d %d\n",x);
	fun();
}
