#include <stdio.h>

void main(){
	int userInput ;
	printf("Enter the value : ");
	scanf("%d",&userInput);

	if(userInput%2==0){
		printf("%d is a even number ", userInput);
	}else{
		printf("%d is not a even number",userInput);
	}


}
