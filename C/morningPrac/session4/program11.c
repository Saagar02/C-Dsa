/*  Q11)	
 *	1  2  3  4  
	4  5  6  
	6  7  
	7   
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	int x =1;
	
	for(int i=0;i<row;i++){
		for(int j=row;j>i;j--){
			printf("%d  ",x);
			x++;
		}
		x-=1;
		printf("\n");
	
	}


}
