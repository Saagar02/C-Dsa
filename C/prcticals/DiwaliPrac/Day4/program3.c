/* 3) WAP swapping two numbers by call by address */

#include<stdio.h>

void main(){
	int a;
	printf("Enter first no :\n");
	scanf("%d",&a);

	int b;
	printf("Enter second no :\n");
	scanf("%d",&b);
	
	int *ptr1  = &a;
	int *ptr2 = &b;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

	int temp = a;

	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	printf("1)%d\n2)%d\n",a,b);


}
