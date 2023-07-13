#include<stdio.h>

void main(){
	int row;
	printf("Enter no of row\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int x=i;
		for(int space=1;space<i;space++){
			printf("   ");
		}
		for(int j=row;j>=i;j--){
			printf("%d  ",x);
			x++;
		}
		printf("\n");
		
	}

}
