/*		Q11)
 *	 	 	 	 	 	1	
 				 	1	4	
			 	4	7	10	
			10	13	16	19	
			 	19	22	25	
 	 				25	28	
 	 	 				28
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
			x+=3;
		}
		x = x-3;

		printf("\n");
	
	}


}
