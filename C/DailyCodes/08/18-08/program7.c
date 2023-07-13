#include <stdio.h>

void main(){
	int userInput ;
	printf("Enter the value :");
	scanf("%d",&userInput);
	
	if(userInput%4==0 && userInput%5==0){
		printf("%d is divisible by 4 & 5", userInput);
	}else{
		printf("%d is not divisible by 4 & 5",userInput);
	}

}
