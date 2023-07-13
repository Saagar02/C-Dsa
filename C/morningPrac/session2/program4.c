/*    Q4)
 * 	d d d d 
	c c c c 
	b b b b 
	a a a a  
	*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=row;i>=1;i--){
		for(int j=0;j<4;j++){
			printf("%c ",i+96);
		}
		printf("\n");
	
	}

}
