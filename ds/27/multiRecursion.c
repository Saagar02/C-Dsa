#include<stdio.h>
int fun(int no){
	printf("Hi\n");
	int x = fun(no-1);
	int y = fun(no-2);
	printf("x = %d\n",x);
	printf("y = %d\n",y);
}
void main(){
	fun(5);
}
