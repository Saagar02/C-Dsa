/*    Q7)
 * 	D D D D 
	C C C C 
	B B B B 
	A A A A  
	*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=row;i>=1;i--){
		for(int j=0;j<4;j++){
			printf("%c ",i+64);
		}
		printf("\n");
	
	}

}
