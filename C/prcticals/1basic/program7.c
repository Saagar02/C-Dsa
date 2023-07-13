/*7. Write a program to print a table of 12*/

#include <stdio.h>

void main(){
	int input1;
	printf("Enter the Starting value :\n");
	scanf("%d",&input1);

	int input2;
	printf("Enter the end value :\n");
	scanf("%d",&input2);

	printf("Table of 12 from %d to %d is : \n",input1,input2);
	int count =0;

	for(int i=input1 ;i<=input2;i++){
		count++;
		printf("%d) 12 * %d = %d\n",count,i,12*i);
	}


}
