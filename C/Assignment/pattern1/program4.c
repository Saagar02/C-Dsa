/*
	A B C
	D E F
	G H I
 */
# include <stdio.h>

void main(){
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	int col;
	printf("Enter the number of colum : \n");
	scanf("%d",&col);

	char car ='A';
	for(int i=1;i<=row;i++){

		for(int j=1;j<=col;j++){
			printf("%c ",car);
			car++;
		}
		printf("\n");
		
	
	}


}
