/*		Q12)
 *	 	 	 	 	 	1	
 				 	1	2	
			 	2	3	4	
			4	5	6	7	
			 	7	8	9	
 	 				9	10	
 	 	 				10
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	int space;int col;int x=1;
	for(int i=1;i<=row*2-1;i++){
		if(i<row){
			space = row-i;
		}else{
			space = i -row;
		}
		for(int sp = 1;sp<=space;sp++){
			printf(" 	");
		}
		if(i<row){
			col =i;
		}else{
			col = row*2-i;
		}
	
		for(int j=1;j<=col;j++){
			printf("%d	",x);
			x++;
		}
		x--;

		printf("\n");
	
	}


}
