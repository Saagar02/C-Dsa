/*
	1 3 5
	7 9 11
	13 15 17 
*/
# include <stdio.h>

void main(){
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	int col;
	printf("Enter the number of colum : \n");
	scanf("%d",&col);

	int var =1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("%d ",var);
			var+=2;
		}
		printf("\n");
	
	}


}
