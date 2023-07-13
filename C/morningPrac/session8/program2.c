/*		Q2)
 *
 * 			1	2	3	4	5	
				6	7	8	
					9	*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int x=1;
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		for(int j=row*2-i;j>=i;j--){
			printf("%d	",x);
			x++;
		}
		printf("\n");
	}
}
