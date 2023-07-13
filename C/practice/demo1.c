#include<stdio.h>
int factorial(int n){
	static int n1=0,n2=1,n3=0;
	if(n<=0){
		return 0;
	}
	printf("%d ",n3);
	n3 = n1+n2;
	n1 = n2;
	n2 = n3;
	factorial(n-1);	
}
void main(){

	int n = 10;
	factorial(10);
}
