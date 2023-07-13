/*    Q5)
 * 	a B c 
	d E f 
	g H i 
	*/
#include<stdio.h>

void main(){
	int x=1;
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		x=i+1;
		for(int j=0;j<3;j++){
			printf("%d ",x);
			x++;		
		}
		printf("\n");
	}

}
