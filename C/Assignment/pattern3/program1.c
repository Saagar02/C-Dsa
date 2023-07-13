/*	1 2 3 4
	1 3 5 7
	1 4 7 10
	1 5 9 13
*/


#include <stdio.h>

void main(){
	int row;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){	
		int var=1;
		for(int j=1;j<=4;j++){
			printf("%d ",var);
			var = var+i;
		}
		printf("\n");
	}


}
