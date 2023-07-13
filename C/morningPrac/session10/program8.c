/*		Q8)
 *			 	 	 	D	
 	 				C	D	
 				B	C	D	
			A	B	C	D	
			 	B	C	D	
 	 				C	D	
 	 	 				D	
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
		for(int j=1;j<=col;j++){
			printf("%c	",row-col+64+j);
		}
		printf("\n");
	
	}


}
