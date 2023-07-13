#include<stdio.h>

void main(){
	int arr[][3]={10,20,30,40,50,60,70,80,90};

		printf("%d\n",arr[0][2]);	//30
		printf("%d\n",arr[1][0]);	//40
		printf("%d\n",arr[2][1]);	//80

		printf("%p\n",arr[0]);		//100
		printf("%p\n",arr[1]);		//112
		printf("%p\n",arr[2]);		//124

		printf("%p\n",&arr[0][2]);	//108
		printf("%p\n",&arr[1][1]);	//116
		printf("%p\n",&arr[2][0]);	//124

}
