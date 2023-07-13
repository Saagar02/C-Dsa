/*		Q13)
 *	 	 	 		 	A	
 	 				a	b	
			 	B	C	D	
			d	e	f	g	
			 	G	H	I	
 	 				i	j	
 	 	 				J
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
			if(i%2!=0){
				printf("%c	",x+64);
			}else{
				printf("%c	",x+96);
			}
			x++;
		}
		x--;

		printf("\n");
	
	}


}
