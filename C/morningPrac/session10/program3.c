/*			Q3)
 *			  	  	  	1	
  	  				2	1	
  				3	2	1	
			4	3	2	1	
  				3	2	1	
  	  				2	1	
  	  	  				1	
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	int space;int col;
	for(int i=1;i<row*2;i++){
		
		if(i<row){
			space = row - i;
		}else{
			space = i-row;
		}
		for(int sp = 1;sp<=space;sp++){
			printf("  	");
		}
		if(i<row){
			col = i;
		}else{
			col = row*2-i;
		}
		int x =col;
		for(int j=1;j<=col;j++){
			printf("%d	",x);
			x--;
		}
		printf("\n");
	
	}


}
