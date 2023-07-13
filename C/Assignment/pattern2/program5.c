/*
	D C B A
	e d c b
	F E D C
	g f e d
 */

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);

	int var=68,var2=68;
	for(int i=1;i<=row;i++){
		var=var2;
		for(int j=1;j<=col;j++){
			if(i%2!=0){
				printf("%c ",var);
			}else{	
				printf("%c ",var+32);
			}
			var--;
		}
		var2++;
		printf("\n");
	}
}
