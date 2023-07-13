#include<stdio.h>

void main(){
	int userInput;
	printf("Enter the value :");
	scanf("%d",&userInput);

	if(userInput>=100){
		printf("player scored century\n");
	}
	if(userInput>=50&&userInput<=99){
		printf("player scored half century\n");
	}

}
