/*  Q7)
 *	c 
	b b 
	a a a  
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	
	for(int i=row;i>=1;i--){
		for(int j=row;j>=i;j--){
			printf("%c ",i+96);	
		}
		printf("\n");
	}
}
