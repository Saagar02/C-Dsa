/*  Q2)
 *	1 
	2 3 
	4 5 6 
	7 8 9 10 
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	int x=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
