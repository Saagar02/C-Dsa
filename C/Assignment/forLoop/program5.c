/*5. WAP to take the Number input and print all the factors of that number.*/

#include<stdio.h>

void main(){
	int input1;
	printf("Enter the number : \n");
	scanf("%d",&input1);
	printf("factors of %d are : \n",input1);
	for(int i=1;i<input1;i++){
		if(input1%i==0){
			printf("%d ",i);
		}	
	}
	printf("\n");

}
