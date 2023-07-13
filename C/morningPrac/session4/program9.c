/*  Q9)	
 	D  C  B  A  
	C  B  A  
	B  A  
	A  
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++){
		for(int j=row;j>i;j--){
			printf("%c  ",j-i+64);
		}
		printf("\n");
	
	}


}
