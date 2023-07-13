/*	Q12)
 *			4	
		3	6	3	
	2	4	6	4	2	
1	2	3	4	3	2	1*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=row-i+1;
		for(int sp=row;sp>i;sp--){
			printf("	");
		}
		for(int j=1;j<=i*2-1;j++){
			if(j<i){
				printf("%d	",x);
				x+=(row-i+1);
			}else{
				printf("%d	",x);
				x-=(row-i+1);
			}
			
		}
		printf("\n");
	
	}



}
