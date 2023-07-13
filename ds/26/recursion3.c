#include<stdio.h>

int fun(){
	static int x =5;
	printf("HI\n");	
	if(x != 1){
		fun(--x);
		printf("BYE\n");	
	}	
}
void main(){
	fun();
}
