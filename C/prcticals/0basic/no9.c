#include <stdio.h>

void main(){
	int input1;

	printf("Enter the Number : \n");
	scanf("%d",&input1);

	if(input1<0){
		printf("%d is a negative number\n ",input1);
	}else if(input1>0){
		printf("%d is a positive number\n ", input1);
	}
	else if(input1==0){
		printf("0 is neither positive nor negative \n");
	}
	else{
		printf("Enter valid input \n");
	}
}
