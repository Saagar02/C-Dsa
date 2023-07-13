/*  Q6)	
 *	a  b  c  d  
	a  b  c  
	a  b  
	a  

*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	
	for(int i=row;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("%c  ",j+96);
		}
		printf("\n");
	
	}


}
