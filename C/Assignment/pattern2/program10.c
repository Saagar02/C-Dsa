/*	D4 C3 B2 A1
	A1 B2 C3 D4
	D4 C3 B2 A1
	A1 B2 C3 D4
 */

#include<stdio.h>

void main(){
	int row,col;
	printf("Enter number of rows : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);

	for(int i=1;i<=row;i++){
		int var=4;
		for(int j=1;j<=col;j++){
			if(i%2!=0){
				printf("%c%d  ",var+64,var);
				var--;
			}else{
				printf("%c%d  ",var+61,var-3);
				var++;
			}

		}
		printf("\n");
	}
}
