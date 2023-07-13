/*8. Write a program to print a table of 11 in reverse order */

#include <stdio.h>

void main(){
	int input1;
	printf("Enter the start value : \n");
	scanf("%d",&input1);

	int input2;
	printf("Enter the end value : \n");
	scanf("%d",&input2);

	printf("Table of 11 in reverse order :\n");
	for(int i=input2;i>=input1;i--){

		printf("%d) 11*%d = %d\n",i,i,i*11);
	
	}


}
