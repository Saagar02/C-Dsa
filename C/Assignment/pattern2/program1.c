/*	4 3 2 1
	5 4 3 2
	6 5 4 3
	7 6 5 4		*/

#include<stdio.h>

void main(){

	int input;
	printf("Enter the number of rows : \n");
	scanf("%d",&input);

	int input1;
	printf("Enter the number of rows : \n");
	scanf("%d",&input1);


	int var1=4,var2=4;

	for(int i=1;i<=input;i++){
		var1=var2;
		for(int j=1;j<=input1;j++){
			printf("%d ",var1);
			var1--;
		}
		var2++;
		printf("\n");
	
	}


}
