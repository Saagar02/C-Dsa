#include <stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter first no : \n");
	scanf("%d",&input1);

	printf("Enter second no :\n");
	scanf("%d",&input2);

	if(input1<input2){
		printf("%d is smaller than %d \n",input1,input2);
	}else{
		printf("%d is smaller than %d \n",input2,input1);
	}
}
