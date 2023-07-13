/*		Q6)
 *			 	 	 	 	*	
 				 	*	*	*	
			*	*	*	*	*	
 	 				*	*	*	
 	 	 	 				*
 *
 *		*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	int space;int col;int x=4;int y=1;
	for(int i=1;i<=row*2-1;i++){
		if(i<row){
			space = (row-i)*2;
			col = i;
		}else{
			space = (i-row)*2;
			col = row*2-i;
		}
		for(int sp = 1 ;sp<=space;sp++){
			printf(" 	");
		}
		for(int j=1;j<=(col-1)*2+1;j++){
			printf("*	");
		}
		printf("\n");
	
	}


}
