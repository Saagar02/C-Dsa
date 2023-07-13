#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int x=1;
	for(int i=1;i<=row;i++){
		for(int space=1;space<i;space++){
			printf(" 	");
		}
		for(int j=row;j>=i;j--){
			printf("%d	",x);
			x++;	
		}
		printf("\n");
	}


}
