/*  Q7)	
 *	1  2  3  4  5  
	2  3  4  5  
	3  4  5  
	4  5  
	5  
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	int x=1;
	for(int i=1;i<=row;i++){
		x=i;
		for(int j=row;j>=i;j--){
			printf("%d  ",x);
			x++;
		}	
		printf("\n");
		
	}


}
