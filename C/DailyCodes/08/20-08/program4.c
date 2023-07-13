#include<stdio.h>

void main(){
	int budget;
	printf("Enter Your Pocket Money:\n");
	scanf("%d",&budget);

	if(budget>=5000){
		printf("Goa trip\n");
	}else if(budget>=3000){
		printf("Mumbai trip\n");
	}else if(budget>=2000){
		printf("Devkund\n");
	}else if(budget>=1000){
		printf("Lohagad\n");
	}else{
		printf("Ghari bas\n");
	}

}
