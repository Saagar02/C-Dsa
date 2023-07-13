/*  Q5)	
 *	4  3  2  1  
	3  2  1  
	2  1  
	1  
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++){
		for(int j=row;j>i;j--){
			printf("%d  ",j-i);
		}
		printf("\n");
	
	}


}
