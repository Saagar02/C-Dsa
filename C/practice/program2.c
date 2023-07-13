#include<stdio.h>

int userVal(){
	int x;
	printf("Enter value of x \n");
	scanf("%d",&x);
	return x;
}
void main(){
	int x=userVal();
	printf("Value of x is %d\n",x);

}
