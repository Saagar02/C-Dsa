/*
	3 2 1
	c b a
	3 2 1
	c b a
*/

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of colum : ");
	scanf("%d",&col);

	for(int i=1;i<=row;i++){

		for(int j=col;j>=1;j--){
			if(i%2!=0){
				printf("%d ",j);
			}else{
				printf("%c ",96+j);
			}	
		}
		printf("\n");
	
	}

}
