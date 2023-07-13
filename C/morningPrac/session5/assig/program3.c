#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int space=0;
	for(int i=0;i<row;i++){
		for(space=row;space>i;space--){
			printf("  ");
		}
		for(int j=0;j<=i;j++){
			printf("%c ",100-i);
		}
		printf("\n");
	}
}
