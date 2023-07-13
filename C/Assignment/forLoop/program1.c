/* 1. WAP a program to see a given number is a multiple of 3 */

#include <stdio.h>
void main(){
	
	int userIp;
	printf("Enter the number : \n");
	scanf("%d",&userIp);

	if(userIp%3==0){
		printf("%d is multiple of 3 \n",userIp);
	}else{
		printf("%d is not multiple of 3 \n",userIp);
	
	}

}
