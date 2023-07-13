#include<stdio.h>
int fibo(int no){
	if(no==1|| no==0){
		return no;
	}
	return fibo(no-1)+fibo(no-2);
}
void main(){
	int no;
	printf("Enter the no :");
	scanf("%d",&no);
	int retval = fibo(no);
	printf("%d\n",retval);
}
