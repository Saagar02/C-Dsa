/*				Q8)
 *					D	C	B	A	B	C	D	
						c	b	a	b	c	
							B	A	B	
								a	*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=row-i+65;
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		for(int j=row*2-i;j>=i;j--){
			if(i%2!=0){
				if(j>row){
					printf("%c	",x);
					x--;	
				}else{
					printf("%c	",x);
					x++;
				}
			}else{
				if(j>row){
					printf("%c	",x+32);
					x--;	
				}else{
					printf("%c	",x+32);
					x++;
				}
			
			}

		}
		printf("\n");
	}

}
