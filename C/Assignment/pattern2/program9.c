/*
	1 3 8
	15 24 35
	48 63 80
 */

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);

	int var=1,var1=1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("%d  ",var);
			var1++;
			var = (var1*var1)-1;
		}
		printf("\n");
	}


}
