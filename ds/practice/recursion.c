#include<stdio.h>

int factorial(int no){
	if(no>=1){
		return no*factorial(no-1);
	}else
		return 1;
}
void main(){
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	printf("factorial  of %d is %d\n",no,factorial(no));
}
