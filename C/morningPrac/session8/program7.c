/*			Q7)
 *				4	3	2	1	2	3	4	
					3	2	1	2	3	
						2	1	2	
							1	
*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=row-i+1;
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		for(int j=row*2-i*2+1;j>=1;j--){
			if(j>row-i+1){
				printf("%d	",x);
				x--;
			}else{
				printf("%d	",x);
				x++;	
			}
		}
		printf("\n");
	

	}
}
