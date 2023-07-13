/*  Q4)
 *	1 
	1 2 
	1 2 3 
	1 2 3 4 
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++){
		int x=1;
		for(int j=0;j<=i;j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
