/*		Q2)
 *			 	 	A	
 	 			b	b	b	
 			C	C	C	C	C	
		d	d	d	d	d	d	d	
 			C	C	C	C	C	
 	 			b	b	b	
 	 	 			A	

 *
 *
 *
 * */
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int space;int col=-1;int x=0;
	for(int i=1;i<=row*2-1;i++){
		if(i<=row){
			space = row-i;
			col = col+2;
			x++;	
		}else{
			space = i-row;
			col = col-2;
			x--;
		}
		for(int sp=1;sp<=space;sp++){
			printf(" 	");
		}
		for(int j=1;j<=col;j++){
			if(i%2!=0){
				printf("%c	",x+64);
			}else{
				printf("%c	",x+96);
			}
		}
		printf("\n");		
	}

}
