/*
	D4 C3 B2 A1
	D4 C3 B2 A1
	D4 C3 B2 A1
	D4 C3 B2 A1 
*/
# include <stdio.h>

void main(){
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	int col;
	printf("Enter the number of colum : \n");
	scanf("%d",&col);

	for(int i=1;i<=row;i++){
		int var =col;
		int car =64+col;

		for(int j=1;j<=col;j++){
			printf("%c%d ",car,var);
			car--;
			var--;
		}
		printf("\n");
	
	}


}
