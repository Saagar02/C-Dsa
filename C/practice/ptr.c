#include<stdio.h>
void fun(int x , int y){
	printf("%d %d\n",x,y);
}

void main(){
	void (*ptr)();
	ptr=fun;
	ptr(10,20,30,40);
}

