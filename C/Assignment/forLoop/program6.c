/*
6.WAP to calculate the factorial of a given number.
 */
#include<stdio.h>

void main(){

	int input1;
	printf("Enter the number : \n");
	scanf("%d",&input1);

	if(input1>0){
		long long multi =1;
		for(int i=1;i<=input1;i++){
			multi = multi*i;
		}
		printf("factorial of %d is : %lld \n",input1,multi);
	}
	else{
		printf("Enter valid number \n");
	
	}

}
