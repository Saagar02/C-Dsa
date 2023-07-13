/*  Q3)
 *	1 2 3 4 
	1 2 3 
	1 2 
	1 

 *
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no rows\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		int x=1;
		for(int j=row;j>=i;j--){	
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
