/*
	I H G
	F E D
	C B A 	*/

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);

	int var=64+(row*col);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("%c ",var);
			var--;
		}
		printf("\n");
	}


}
