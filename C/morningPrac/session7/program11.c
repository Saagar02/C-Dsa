/*			Q11)
 *						1	
					A	b	A	
				1	2	3	2	1	
			A	b	C	d	C	b	A*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int x=1;
		for(int sp = row;sp>i;sp--){
			printf("	");
		}
		for(int j=1;j<=i*2-1;j++){
			if(i%2!=0){
				if(j<i){
					printf("%d	",x);
					x++;
				}else{
					printf("%d	",x);
					x--;
				}
			}else{
				if(j%2!=0){
					if(j<i){
						printf("%c	",x+64);
						x++;
					}else{
						printf("%c	",x+64);
						x--;
					}
				}else{
					if(j<i){
						printf("%c	",x+96);
						x++;
					}else{
						printf("%c	",x+96);
						x--;
					}
					
				}
			}
		}
			printf("\n");
	}



}
