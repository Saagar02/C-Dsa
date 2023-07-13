/*
	18 16 14
	12 10 8
	6 4 2
 */

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);

	int var=(row*col)*2;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("%d ",var);
			var-=2;
		}
	
		printf("\n");
	}


}
