/* 	 	Q7)
 *		 	 		1	
 		 		4	1	4	
 			7	4	1	4	7	
		10	7	4	1	4	7	10	*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of row\n");
	scanf("%d",&row);
	int x=1;
	for(int i=1;i<=row;i++){
		for(int space=row;space>i;space--){
			printf(" 	");
		}
		for(int j=1;j<=i*2-1;j++){
			if(j<i){
				printf("%d	",x);
				x=x-3;
			}	
			else{
				printf("%d	",x);
				x=x+3;
			}	
		}
		printf("\n");
	}

}
