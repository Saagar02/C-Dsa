#include <stdio.h>

void main(){

	float income;
	printf("Enter you Income : ");
	scanf("%f",& income);

	if(income> 0000 && income<=500000){
		printf("Your tax slab is 0 .");
	}

	if(income> 500000 && income<=1000000){
		printf("Your tax slab is 5 .");
	}

	if(income> 1000000 && income<=1500000){
		printf("Your tax slab is 10 .");
	}

	if(income> 1500000 && income<=2000000){
		printf("Your tax slab is 15 .");
	}

	if(income> 2000000 && income<=3000000){
		printf("Your tax slab is 20 .");
	}

	if(income> 3000000){
		printf("Your tax slab is 30 .");
	}	

}
