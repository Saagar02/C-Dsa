/*		Q6)
 *
 *			1	2	3	4	5	6	7	
				1	2	3	4	5	
					1	2	3	
						1*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=1;
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		for(int j=row*2-i;j>=i;j--){
			if(j>j-row+i){
				printf("%d	",x);
				x++;
			}else{
				printf("%d	",x);
				x--;
			}
		}
		printf("\n");
	
	}


}
