#include<stdio.h>

void main(){
	int row;
	printf("Enter no of row\n");
	scanf("%d",&row);
	int x=row;
	for(int k=1;k<=row;k++){
		x = x + (row-k);
	}
	printf("Element = %d\n",x);

	for(int i=1;i<=row;i++){
		for(int space=1;space<i;space++){
			printf("	");
		}
		for(int j=row;j>=i;j--){
			if(x%2==0){
				printf("%d	",x*x);
			}else{
				printf("%d	",x);
			}
			x--;
		}
		printf("\n");
	}

}
