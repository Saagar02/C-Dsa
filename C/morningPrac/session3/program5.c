/*  Q5)
 *	a 
	b c 
	d e f 
	g h i j  
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	int ch =97;	
	for(int i=0;i<=row;i++){
		for(int j=0;j<=i;j++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
