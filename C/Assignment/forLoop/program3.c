/*WAP to print all even numbers in reverse order and odd numbers in the standard
way. Both separately. Within a range.*/

#include<stdio.h>

void main(){

	int input1;
	int input2;
	int change=0;
	
	printf("Starting value \n");
	scanf("%d",&input1);

	printf("Ending value \n");
	scanf("%d",&input2);
	
	if(input1<0 || input2<0){
		
		printf("Invalid input \n");

	}	
	else{
		
		for(int i=input2;i>=input1;){
	
			if(change==0){
		
				if(i%2==0 ){
					printf("%d ",i);
				}
				if(i<=input1){
					
					change=1;
					i=input2;
					printf("\n");
				}	
				if(change==0){
				
					i--;
				}

			}else{
				if(input1%2!=0){

					printf("%d ",input1);
				
				}
					input1++;
			}
	
		}
		printf("\n");
	}
}
