/* WAP which explain the concept of array of pointer */
#include<stdio.h>

void main(){

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e = 50;

	int *arr[5] = {&a,&b,&c,&d,&e};
	for(int i=0;i<5;i++){
		printf("%d\n",*(*arr+i));
	}

	printf("%d\n",*(*arr+1));	//20


}
