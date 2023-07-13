/*  Q12)	
 *	4  3  2  1  
	4  3  2  
	4  3  
	4   
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++){
		int x=row;
		for(int j=row;j>i;j--){
			printf("%d  ",x);
			x--;
		}
		printf("\n");
	
	}


}
