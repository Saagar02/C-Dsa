/*9. WAP to calculate the square root of a number ranging from 100 to 300*/
#include <stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter the starting range : \n");
	scanf("%d",&input1);

	printf("Enter the ending range : \n");
	scanf("%d",&input2);

	int i=1;
	int range=0;
	while(range<input2){
		range =i*i;
		if(range>input1 && range<input2){
			printf("square root of %d is %d \n",i*i,i);
		}
		i++;
	}
}
