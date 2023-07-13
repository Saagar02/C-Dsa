#include <stdio.h>

void main(){
	char userInput;
	printf("Enter the character :");
	scanf("%c",&userInput);

	if(userInput =='a'||userInput == 'e'||userInput == 'i'||userInput == 'o'||userInput =='u'){
		printf("You have enter vovel");
	}else{
		printf("You have entered constat");
	}
	

}
