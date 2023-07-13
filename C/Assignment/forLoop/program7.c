/*7. WAP to calculate the LCM of given two numbers.*/
#include<stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter the first number : \n");
	scanf("%d",&input1);
	printf("Enter the second number : \n");
	scanf("%d",&input2);

	int lcm = input1*input2;
	if(input1<input2){
		if(input2%input1==0){
			printf("LCM of %d and %d is : %d \n",input1,input2,input2);
		}else{
			printf("LCM of %d and %d is : %d \n",input1,input2,lcm);
		}
	}else if(input2<input1){
			if(input1%input2==0){
			printf("LCM of %d and %d is : %d \n",input1,input2,input1);
		}else{
			printf("LCM of %d and %d is : %d \n",input1,input2,lcm);
		}	
	}else{
		printf("LCM of %d and %d is : %d ",input1,input2,input1);
	
	}


}
