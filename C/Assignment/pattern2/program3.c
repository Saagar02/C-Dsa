/*
	4 4 4 4
	3 3 3 3
	2 2 2 2
	1 1 1 1
 */

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);
	int var=4;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("%d ",var);
		}
		var--;
		printf("\n");
	}


}
