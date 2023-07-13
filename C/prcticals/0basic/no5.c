#include <stdio.h>

void main(){
	int input1;
	printf("Enter the number : \n");
	scanf("%d",&input1);

	if(input1%5==0 && input1%11==0){
		printf("%d is divisible by 5 and 11 \n",input1);
	}else{
		printf("%d is not divisible by 5 and 11 \n",input1);
	}
}
