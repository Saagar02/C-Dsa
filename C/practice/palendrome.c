#include <stdio.h>

void main(){
	int userInput;
	printf("Enter 3 digit number : ");
	scanf("%d",&userInput);
	int x =0;
	int y =0;

	x = userInput/100;
	y = userInput%10;

	if(x==y){
		printf("%d is a palindrome ", userInput);
	}
	
	
}
