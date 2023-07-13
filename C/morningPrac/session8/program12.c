/*				Q8)
 *					1	3	5	7	9	7	5	3	1	
						9	7	5	3	5	7	9	
							3	5	7	5	3	
								7	5	7	
									5	*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int x=1;
	int y=1;
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		x =y;
		for(int j=row*2-i;j>=i;j--){
			if(j==row){
				y=x;
			}
			if(i%2!=0){
				if(j>row){	
					printf("%d	",x);
					x+=2;
				}else{
					printf("%d	",x);
					x-=2;
				}
			}else{
				if(j>row){	
					printf("%d	",x);
					x-=2;
				}else{
					printf("%d	",x);
					x+=2;
				}
			
			
			}
		}
		printf("\n");
	}

}
