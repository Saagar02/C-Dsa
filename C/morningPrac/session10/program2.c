/*			Q2)	
 *			 	 	 	1	
			 	 	1	2	
 				1	2	3	
			1	2	3	4	
 				1	2	3	
 	 				1	2	
 	 	 				1	*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	int space,col;
	for(int i=1;i<row*2;i++){
		if(i<row){
			space = row-i;
		}else{
			space = i-row;
		}
		for(int sp = 1;sp<=space;sp++){
			printf(" 	");
		}	
		if(i<row){
			col = i;
		}else{
			col = row*2-i;
		}
		for(int j=1;j<=col;j++){
			printf("%d	",j);
		}
		printf("\n");
	}


}
