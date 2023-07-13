/*
	A B C D
	B C D E
	C D E F
	D E F G
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
	char car1 ='A';
	for(int i=1;i<=row;i++){
		car = car1;
		for(int j=1;j<=col;j++){
			printf("%c ",car);
			car++;
		}
		printf("\n");
		car1++;
	
	}


}
