#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	
	/*for(int i=row;i>=1;i--){
		for(int space=1;space<i;space++){
			printf("  ");
		}
		for(int j=4;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	
	}*/
	int space=0;
	for(int i=0;i<row;i++){
		
		for(space =row;space>i;space--){
			printf("  ");
		}
		for(int j=0;j<=i;j++){
			printf("%d ",space);
		}
		printf("\n");
	
	}

}
