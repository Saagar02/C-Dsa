/* 2) WAP swapping of two numbers by call by value */

#include<stdio.h>

void main(){
	int a;
	printf("Enter first no :\n");
	scanf("%d",&a);

	int b;
	printf("Enter second no :\n");
	scanf("%d",&b);

	int temp = a;
	a = b;
	b = temp ;
	printf("1)%d\n2)%d\n",a,b);


}
