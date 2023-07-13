/*2.)WAP to print the Multiplication of two number using Function Pointer(write a mult
function and print the multiplied value in main function).*/

#include<stdio.h>

int mult(int a , int b){
	int multi = a*b;
	return multi;
}
void main(){
	int x , y;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);

	int (*ptr)(int,int);
	ptr = mult;
	int multi=ptr(x,y);


	printf("Multiplication of %d and %d is %d\n",x,y,multi);


}
