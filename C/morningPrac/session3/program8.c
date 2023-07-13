/*  Q1)
 *	* 
	* * 
	* * * 
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	int x=1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",i*j);

		}
		printf("\n");
	}
}
