/*  Q2)	
 *	1  2  3  4  
	1  2  3  
	1  2  
	1 
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	
	for(int i=row;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("%d  ",j);
		}
		printf("\n");
	
	}


}
