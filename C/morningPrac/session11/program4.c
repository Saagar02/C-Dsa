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
	int space;int col=-1;
	for(int i=1;i<=row*2-1;i++){
		if(i<=row){
			space = row-i;
			col = i;
				
		}else{
			space = i-row;
			col = row*2-i;
			
		}
		for(int sp=1;sp<=space;sp++){
			printf(" 	");
		}
		for(int j=1;j<=col*2-1;j++){
			printf("%d	",col);
		}
		printf("\n");		
	}

}
