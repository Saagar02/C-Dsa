#include<stdio.h>

void main(){
	int pMoney;
	printf("Enter Your Pocket Money:\n");
	scanf("%d",&pMoney);

	if(pMoney>=2500){
		printf("HappiPola\n");
	}else if(pMoney>=1000){
		printf("CO2\n");
	}else if(pMoney>=1000){
		printf("Sarovar\n");
	}else if(pMoney>=500){
		printf("Vaishali\n");
	}else{
		printf("plan Cancel\n");
	}

}
