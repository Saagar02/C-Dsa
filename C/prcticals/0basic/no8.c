#include <stdio.h>

void main(){
	char input1;

	printf("Enter the Character : ");
	scanf("%c",&input1);

	if(input1>=65 && input1<=90){
		printf("You entered UPPERCASE character\n");

	}else if(input1>=97 && input1<=122){
		printf("You entered lowercase character\n");
	}
	else{
		printf("Enter valid character \n");
	}
}
