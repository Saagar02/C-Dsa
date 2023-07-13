/*
	= = = =
	$ $ $ $
	= = = =
	$ $ $ $
 */

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i%2!=0){
				printf("= ");
			}else{
				printf("$ ");
			}
		}
		printf("\n");
	}
}
