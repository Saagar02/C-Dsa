/*10. Write a program to print the product of the first 10 numbers*/

#include <stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter starting value :\n");
	scanf("%d",&input1);

	printf("Enter end value : \n");
	scanf("%d",&input2);

	printf("product of number from %d to %d is :",input1,input2);
	int product =1;
	for(int i=1 ;i<=10;i++){
		product = product*i;
	}
	printf("%d\n",product);


}
