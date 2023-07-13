#include <stdio.h>

void main(){
	int input1;
	
	printf("Enter the Number : \n");
	scanf("%d",&input1);
	if(input1==0){
		printf("%d is not a even nor a odd number\n",input1);
	}
	else if(input1%2==0){
		printf("%d is a even number\n",input1);
	}else{
		printf("%d is a odd number\n",input1);
	}
}
