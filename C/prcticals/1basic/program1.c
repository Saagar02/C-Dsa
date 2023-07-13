/*1. Write a program to print the first 10 capital Alphabets */


#include <stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter starting number :\n");
	scanf("%d",&input1);

	printf("Enter end nuber : \n");
	scanf("%d",&input2);

	printf("10 capital Alphabets from %d to %d are :\n", input1,input2);
	for(int i=input1 ;i<=input2;i++){
		printf("%d = %c\n",i,i);
	}


}
