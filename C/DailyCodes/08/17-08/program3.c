#include <stdio.h>

void main(){
	
	printf("Enter the character : ");
	char  user_Character ;
	scanf("%c", &user_Character);

	if(user_Character>='A'&& user_Character<='Z'){
		printf("You have entered UPPERCASE letter : ");
	}else{
		printf("Yoy have entered lowercase letter : ");
	
	}

}
