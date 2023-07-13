/*    Q3)
 * 	1 4 7 
	10 13 16 
	19 22 25 
	*/
#include<stdio.h>

void main(){
	int row;
	int x=1;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int i=0;i<3;i++){
			printf("%d ",x);
			x+=3;
		
		}
		printf("\n");
	
	}

}
