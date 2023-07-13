#include <stdio.h>
int a=100;
void fun(){
	int x=10;
	printf("In fun()\n");
}
void main(){	
	printf("in main() at start \n");
	int y = 20;
	fun();
	printf("in main() at end \n");
}
