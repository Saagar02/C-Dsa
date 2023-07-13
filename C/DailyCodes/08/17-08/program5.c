// HOMEWORK 

#include <stdio.h>

void main(){
	int bill_Amount ;
	printf("Enter your billing amount : ");
	scanf("%d",&bill_Amount);
	printf("Your billing amount is : %d",  bill_Amount);

	if (bill_Amount>1000 && bill_Amount<=1500){
		printf("\nCongratulation ! you got flat 5 percent off current purchase");
	}
	
	if (bill_Amount>1500 && bill_Amount<=2000){
		printf("\nCongratulation ! you got flat 10 percent off current purchase");
	}	

	if (bill_Amount>2000 && bill_Amount<=2500){
		printf("\nCongratulation ! you got flat 15 percent off current purchase");
	}

	if (bill_Amount>2500 && bill_Amount<=3000){
		printf("\nCongratulation ! you got flat 20 percent off current purchase");
	}

	if (bill_Amount>3000){
		printf("\nCongratulation ! you got flat 25 percent off current purchase");
	}
}
