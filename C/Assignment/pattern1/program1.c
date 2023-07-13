/*
	1 2 3 4
	2 3 4 5
	3 4 5 6
	4 5 6 7
*/
# include <stdio.h>

void main(){
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	int col;
	printf("Enter the number of rows : \n");
	scanf("%d",&col);

	int var=1,var2=1;

	for(int i=1;i<=row;i++){
		var = var2;
		for(int j=1;j<=col;j++){
			printf("%d ",var);
			var++;
		}
		printf("\n");
		var2++;	
	
	}


}
