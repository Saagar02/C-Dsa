/*  Q3)
 *	1 
	2 2 
	3 3 3 
	4 4 4 4 
 
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",i+1);
	
		}
		printf("\n");
	}
}
