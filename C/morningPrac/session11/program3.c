/*		Q2)
 *			 	 	 	 	1	
 	 					1	2	1	
				 	1	2	3	2	1	
				1	2	3	4	3	2	1	
 					1	2	3	4	5	
 	 					1	2	3	
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
	int space;int col=-1;
	for(int i=1;i<=row*2-1;i++){
		int x=0;
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
			if(j<=i){
				x++;
			}else{
				x--;
			}
			printf("%d	",x);
		}
		printf("\n");		
	}

}
