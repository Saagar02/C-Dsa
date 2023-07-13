/*			Q5)
 *
 *				d	d	d	d	d	d	d	
					c	c	c	c	c	
						b	b	b	
							a
*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		for(int j=row*2-i;j>=i;j--){
			printf("%c	",96+row-i+1);			
		}
		printf("\n");
		
	}

}
