#include <stdio.h>

void main(){
	printf("Enter the number : ");
	int userInput ;

	scanf("%d",&userInput);

	if(userInput%2==0){
		printf("%d is a even number",userInput);	
	}else{
		printf("%d is a odd number ");
	}


}
