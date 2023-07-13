/*Write a function which return the addition of two numbers and print ans in main function */

#include<stdio.h>

int sun(int a , int b){
	int sum = a + b;
	return sum;
}
void main(){
	int a;
	printf("Enter first no :\n");
	scanf("%d",&a);

	int b;
	printf("Enter second no :\n");
	scanf("%d",&b);

	printf("sum = %d\n",sun(a,b));


}
