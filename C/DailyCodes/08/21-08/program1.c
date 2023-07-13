#include <stdio.h>

void main(){
	int userInput;
	printf("Enter the value : ");
	scanf("%d",&userInput);

	if(userInput%3==0 && userInput%7==0){
		printf("%d is divisible by 3 and 7 ",userInput);
	}else{
		printf("%d is not divisible by 3 and 7",userInput);
	}



}
