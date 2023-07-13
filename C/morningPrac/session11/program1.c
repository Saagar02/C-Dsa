/*		Q1)
 *			 	*	
 	 		*	*	*	
 		*	*	*	*	*	
	*	*	*	*	*	*	*	
 		*	*	*	*	*	
 	 		*	*	*	
 	 	 		*
 *		
 *
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int space;int col=-1;
	for(int i=1;i<=row*2-1;i++){
		if(i<=row){
			space = row-i;
			col = col+2;
		}else{
			space = i-row;
			col = col-2;
		}
		for(int sp=1;sp<=space;sp++){
			printf(" 	");
		}

		for(int j=1;j<=col;j++){
			printf("*	");
		}

		printf("\n");		
	}

}
