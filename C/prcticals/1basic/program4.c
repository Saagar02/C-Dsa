/*Write a program to print even numbers 1-100*/

#include <stdio.h>

void main(){
	int userInput1;
	int userInput2;
	printf("Enter the value :\n");
	scanf("%d",&userInput1);
	printf("Enter end value : \n");
	scanf("%d",&userInput2);

	int j=0;
	for (int i=userInput1;i<=userInput2;i++){
		if(i%2==0){
			j++;
			printf("%d) %d\n",j,i);
		}
	
	}	

}
