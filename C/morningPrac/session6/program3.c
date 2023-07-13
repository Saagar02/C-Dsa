#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int space=1;space<i;space++){
			printf("   ");
		}
		for(int j=row;j>=i;j--){
			printf("%d  ",j);
		}
		printf("\n");
	
	}


}
