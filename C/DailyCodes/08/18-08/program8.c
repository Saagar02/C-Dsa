#include <stdio.h>

void main(){
	int ch ;
	printf("Are you alive\n");
	printf("Enter Y/N\n");
	scanf("%c",&ch);

	if(ch=='y'|| ch=='n'||ch=='Y'|| ch=='N'){
		printf("Nice");
	}
	else{
		printf("Sad");
	}


}
