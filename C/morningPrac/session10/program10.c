/*				Q10)
 *					 	 	 	 	1	
 	 						3	2	1	
					5	4	3	2	1	
 	 						3	2	1	
 	 	 	 						1
 *
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	int space;int col;int x=4;int y=1;
	for(int i=1;i<=row*2-1;i++){
		if(i<row){
			space = x;
			x-=2;
		}else{
			space = x;
			x+=2;
		}
		for(int sp = 1 ;sp<=space;sp++){
			printf(" 	");
		}
		if(i<row){
			col = y;
			y+=2;
		}else{
			col = y;
			y-=2;
		}
		int x =col;
		for(int j=1;j<=col;j++){
			printf("%d	",col-j+1);
		}
		printf("\n");
	
	}


}
