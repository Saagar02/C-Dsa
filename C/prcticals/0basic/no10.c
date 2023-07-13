#include <stdio.h>

void main(){
	char userInput;
	printf("Enter the character :");
	scanf("%c",&userInput);

	if(userInput =='a'||userInput == 'e'||userInput == 'i'||userInput == 'o'||userInput =='u'||userInput == 'A'||userInput == 'E'||userInput == 'I'||userInput == 'O'||userInput == 'U'){
		printf("You have enter vovel\n");
	}else{
		printf("You have entered constat\n");
	}
	

}
