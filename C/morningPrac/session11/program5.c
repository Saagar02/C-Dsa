/*		Q2)
 *			 	 	1	
		 	 	2	2	2	
 			3	3	3	3	3	
		4	4	4	4	4	4	4	
 			3	3	3	3	3	
 	 			2	2	2	
 	 	 			1	

 *
 *
 *
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int space;int col=-1;int x=5;
	for(int i=1;i<=row*2-1;i++){
		if(i<=row){
			space = row-i;
			col = col+2;
			x--;	
		}else{
			space = i-row;
			col = col-2;
			x++;
		}
		for(int sp=1;sp<=space;sp++){
			printf(" 	");
		}
		for(int j=1;j<=col;j++){
			printf("%d	",x);
		}
		printf("\n");		
	}

}
