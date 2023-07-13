/*9. Write a program to print the sum of the first 10 odd numbers*/

#include <stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter the start value :\n");
	scanf("%d",&input1);

	printf("Enter the end value : \n");
	scanf("%d",&input2);

	int sum=0;
	printf("Sum of odd number from %d to %d is : ",input1,input2);
	for(int i=input1;i<=input2;i++){
		if(i%2==1){
			sum = sum+i;	
		}
	}
	printf("%d\n",sum);
	
}
