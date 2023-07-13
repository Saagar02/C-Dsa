#include<stdio.h>
void main(){
	int a =100;
	int b =200;

	printf("a=%d",a);
	printf("b=%d",b);

	a = a+b;
	b = a-b;
	a = a-b;
	printf("a=%d",a);
	printf("b=%d",b);
}
