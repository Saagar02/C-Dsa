#include <stdio.h>

void main(){
	int input1;

	printf("Enter the Number : \n");
	scanf("%d",&input1);

	if(input1<10){
		printf("%d is smaller than 10 \n",input1);
	}else if(input1>10){
		printf("%d is greater than 10 \n", input1);
	}
	else if(input1==10){
		printf("10 is equal to 10\n");
	}
	else{
		printf("Enter valid input\n");
	}
}
