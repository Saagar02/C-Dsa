/*		Q9)
 *			  	 	 	1	
 	 				2	4	
 				3	6	9	
			4	8	12	16	
 				3	6	9	
 	 				2	4	
 	 	 				1
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	int space;int col;
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
		int x =col;
		for(int j=1;j<=col;j++){
			printf("%d	",x);
			x+=col;
		}
		printf("\n");
	
	}


}
