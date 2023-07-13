/*Write a program to print ASCII values from 0 to 127*/

#include <stdio.h>

void main(){
	int input1;
	printf("Enter the first value :");
	scanf("%d",&input1);
	
	int input2;
	printf("Enter the end value : ");
	scanf("%d",&input2);
	
	printf("ASCII values from %d to %d are :",input1,input2);
	int end = input2;

	for(int i=input1;i<=input2;i++){
		end++;
		printf("%d = %c\n",i,i);
	}

}
