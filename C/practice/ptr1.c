

#include<stdio.h>

void main(){
	int x = 10;
	int *const ptr = &x;
	 *ptr = 20;
	 x =30;
}


