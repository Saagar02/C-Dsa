/*  Q9)
 *	4 
	8 12 
	16 20 24 
	28 32 36 40  
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	int x=row;
	for(int i=0;i<row;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",x);
			x+=row;
		}
		printf("\n");
	}
}
