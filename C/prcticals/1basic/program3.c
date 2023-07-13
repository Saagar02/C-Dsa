/*3. Write a program to print the first ten, 3 digit number */

#include <stdio.h>

void main(){
	int userInput1;
	
	printf("Enter 3 digit number :");
	scanf("%d",&userInput1);
	int endno = userInput1+10;

	printf("First ten 3 digit numbers are :\n");
	
	
	for(int i=userInput1;i<=endno;i++ ){
		printf("%d\n",i);
	
	}
	

}
